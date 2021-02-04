# Copyright 2018 Open Source Robotics Foundation, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import argparse
import pathlib
import sys

from catkin_pkg.package import package_exists_at
from catkin_pkg.package import parse_package


def convert_files_to_idl(extension, conversion_function, argv=sys.argv[1:]):
    parser = argparse.ArgumentParser(
        description=f'Convert {extension} files to .idl')
    parser.add_argument(
        'interface_files', nargs='+',
        help='The interface files to convert')
    args = parser.parse_args(argv)

    for interface_file in args.interface_files:
        interface_file = pathlib.Path(interface_file)
        package_dir = interface_file.parent.absolute()
        while (
            len(package_dir.parents) and
            not package_exists_at(str(package_dir))
        ):
            package_dir = package_dir.parent
        if not package_dir.parents:
            print(
                f"Could not find package for '{interface_file}'",
                file=sys.stderr)
            continue
        warnings = []
        pkg = parse_package(package_dir, warnings=warnings)

        conversion_function(
            package_dir, pkg.name,
            interface_file.absolute().relative_to(package_dir),
            interface_file.parent)
