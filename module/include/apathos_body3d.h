#pragma once

#include <godot_cpp/classes/collision_object3d.hpp>
#include <godot_cpp/classes/wrapped.hpp>
#include <godot_cpp/variant/variant.hpp>

using namespace godot;

class ApathosBody3D : public CollisionObject3D {
	GDCLASS(ApathosBody3D, CollisionObject3D)

protected:
	static void _bind_methods();

public:
	ApathosBody3D() = default;
	~ApathosBody3D() override = default;

	void move_and_step();
	// void print_type(const Variant &p_variant) const;
};
