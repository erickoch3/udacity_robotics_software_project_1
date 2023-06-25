#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginWelcomeToMyWorld : public WorldPlugin
  {
    public: WorldPluginWelcomeToMyWorld() : WorldPlugin()
            {
              printf("Welcome to Eric's World!\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginWelcomeToMyWorld)
}