#include <apathos_body3d.h>

void ApathosBody3D::_bind_methods() {
	godot::ClassDB::bind_method(D_METHOD("move_and_step"), &ApathosBody3D::move_and_step);
}

void ApathosBody3D::move_and_step() {
	print_line("test test test!");
}

void ApathosBody3D::_process(double delta) {
	move_and_step();
}