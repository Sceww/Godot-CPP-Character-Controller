#include <apathos_body3d.h>

void ApathosBody3D::_bind_methods() {
	godot::ClassDB::bind_method(D_METHOD("move_and_step"), &ApathosBody3D::move_and_step);
}

/**
 * @brief Construct and initialize new ApathosBody3D object
 * 
 */
ApathosBody3D::ApathosBody3D() {
	testProperty = 1;
}

/**
 * @brief Destroy and cleanup the ApathosBody3D object
 * 
 */
ApathosBody3D::~ApathosBody3D() {

}

void ApathosBody3D::move_and_step() {
	print_line("test test test!");
	print_line(testProperty);
}

void ApathosBody3D::_process(double delta) {
	move_and_step();
}