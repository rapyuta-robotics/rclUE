from libs_utils import LocalizeLibSymbols
import argparse

if __name__ == '__main__':
    parser = argparse.ArgumentParser(
    description="Update shared lib's rpath in symbol resolving, forcing its dependencies to be searched in the local folder only")
    parser.add_argument("--libs_folder_path", type=str, required=True, help="Full libs folder path")
    args = parser.parse_args()
    LocalizeLibSymbols(args.libs_folder_path)