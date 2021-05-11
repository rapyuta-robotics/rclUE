string name                          # Entity's scoped name.
                                     # An entity can be a model, link, collision, light, etc.
                                     # Be sure to use gazebo scoped naming notation (e.g. [model_name::link_name])
string reference_frame               # Return pose and twist relative to this entity.
                                     # Leaving empty or "world" will use inertial world frame.
