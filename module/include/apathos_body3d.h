#pragma once

#include <godot_cpp/classes/character_body3d.hpp>

using namespace godot;

class ApathosBody3D : public CharacterBody3D {
	GDCLASS(ApathosBody3D, CharacterBody3D)

private:
	int testProperty;

protected:
	static void _bind_methods();

public:
	ApathosBody3D();
	~ApathosBody3D();

	void move_and_step();
	
	void _process(double delta) override;
};
