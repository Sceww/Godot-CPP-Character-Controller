#include <apathos_body_3d.h>

void ApathosBody3D::_bind_methods() {
	godot::ClassDB::bind_method(D_METHOD("move_and_step"), &ApathosBody3D::move_and_step);
}

void ApathosBody3D::move_and_step() {

}

// void ExampleClass::_bind_methods() {
// 	godot::ClassDB::bind_method(D_METHOD("print_type", "variant"), &ExampleClass::print_type);
// }

// void ExampleClass::print_type(const Variant &p_variant) const {
// 	print_line(vformat("Type: %d", p_variant.get_type()));
// }
