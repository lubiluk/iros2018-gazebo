#include "PR2GripperGripPlugin.hh"

#include <gazebo/physics/physics.hh>
#include <string>

using namespace gazebo;

// Register this plugin with the simulator
GZ_REGISTER_MODEL_PLUGIN(PR2GripperGripPlugin);

void PR2GripperGripPlugin::Load(physics::ModelPtr _parent, sdf::ElementPtr _sdf) {
    const auto parentModel = _parent;
    const auto world = parentModel->GetWorld();
    const auto physics = world->GetPhysicsEngine();
    const auto jointController = parentModel->GetJointController();
    
    parentModel->SetGravityMode(false);
    
//    jointController->SetPositionPID("pr2_gripper::r_gripper_joint", common::PID(1, 0, 0));
//    jointController->SetJointPosition("pr2_gripper::r_gripper_joint", 0.03);
//    
    gzdbg << "PR2 Gripper\n"; 

//    const std::string childLinkName = _sdf->GetElement("childLinkName")->Get<std::string>();
//    const std::string parentLinkName = _sdf->GetElement("parentLinkName")->Get<std::string>();

//    const auto parentLink = parentModel->GetLink(parentLinkName);
//    const auto childLink = boost::dynamic_pointer_cast<physics::Link>(world->GetEntity(childLinkName));

//    const auto joint = physics->CreateJoint("fixed", parentModel);
//    // Bullet physics needs accurate joint position
//    // ODE does't care
//    joint->Load(parentLink, childLink, parentLink->GetWorldPose() - childLink->GetWorldPose());
//    joint->Init();
//    joint->SetName("grip_joint_" + parentLink->GetScopedName() + "_" + childLink->GetScopedName());
//    
//    childLink->SetGravityMode(false);
}
