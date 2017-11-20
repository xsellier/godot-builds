#include "glue_header.h"

void godot_icall_1_0(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_1(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return (int)ret;
}

MonoString* godot_icall_0_2(MethodBind* method, Object* ptr) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

bool godot_icall_0_3(MethodBind* method, Object* ptr) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

MonoObject* godot_icall_0_4(MethodBind* method, Object* ptr) {
	Vector3 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	MARSHALLED_OUT(Vector3, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector3), ret_out);
}

MonoObject* godot_icall_0_5(MethodBind* method, Object* ptr) {
	Plane ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	MARSHALLED_OUT(Plane, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Plane), ret_out);
}

Object* godot_icall_ARVRAnchor_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ARVRAnchor");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ARVRCamera_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ARVRCamera");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int godot_icall_1_6(MethodBind* method, Object* ptr, int arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

real_t godot_icall_1_7(MethodBind* method, Object* ptr, int arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

real_t godot_icall_0_8(MethodBind* method, Object* ptr) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	method->ptrcall(ptr, NULL, &ret);
	return (real_t)ret;
}

void godot_icall_1_9(MethodBind* method, Object* ptr, real_t arg1) {
	ERR_FAIL_NULL(ptr);
	double arg1_in = (double)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_ARVRController_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ARVRController");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_10(MethodBind* method, Object* ptr, bool arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_0_11(MethodBind* method, Object* ptr) {
	ERR_FAIL_NULL(ptr);
	method->ptrcall(ptr, NULL, NULL);
}

MonoObject* godot_icall_0_12(MethodBind* method, Object* ptr) {
	Vector2 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	MARSHALLED_OUT(Vector2, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector2), ret_out);
}

Object* godot_icall_ARVRInterfaceGDNative_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ARVRInterfaceGDNative");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ARVROrigin_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ARVROrigin");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_13(MethodBind* method, Object* ptr) {
	Basis ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	MARSHALLED_OUT(Basis, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Basis), ret_out);
}

MonoObject* godot_icall_1_14(MethodBind* method, Object* ptr, bool arg1) {
	Transform ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Transform, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Transform), ret_out);
}

Object* godot_icall_ARVRPositionalTracker_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ARVRPositionalTracker");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_15(MethodBind* method, Object* ptr) {
	Transform ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	MARSHALLED_OUT(Transform, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Transform), ret_out);
}

void godot_icall_2_16(MethodBind* method, Object* ptr, bool arg1, bool arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { &arg1, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_17(MethodBind* method, Object* ptr, int arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoArray* godot_icall_0_18(MethodBind* method, Object* ptr) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoMarshal::Array_to_mono_array(ret);
}

MonoObject* godot_icall_1_19(MethodBind* method, Object* ptr, MonoString* arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_1_20(MethodBind* method, Object* ptr, int arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

void godot_icall_1_21(MethodBind* method, Object* ptr, Object* arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_ARVRServer_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("ARVRServer");
}

void godot_icall_3_22(MethodBind* method, Object* ptr, int arg1, real_t* arg2, real_t arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	MARSHALLED_IN(Vector3, arg2, arg2_in);
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_23(MethodBind* method, Object* ptr, int arg1) {
	Vector3 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector3, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector3), ret_out);
}

void godot_icall_2_24(MethodBind* method, Object* ptr, int arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	MARSHALLED_IN(Vector3, arg2, arg2_in);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_25(MethodBind* method, Object* ptr, int arg1, real_t arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_1_26(MethodBind* method, Object* ptr, int arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

MonoArray* godot_icall_1_27(MethodBind* method, Object* ptr, int arg1) {
	PoolIntArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolIntArray_to_mono_array(ret);
}

void godot_icall_3_28(MethodBind* method, Object* ptr, int arg1, int arg2, bool arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_29(MethodBind* method, Object* ptr, int arg1, int arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_2_30(MethodBind* method, Object* ptr, int arg1, int arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

int godot_icall_1_31(MethodBind* method, Object* ptr, real_t* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	MARSHALLED_IN(Vector3, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

MonoObject* godot_icall_1_32(MethodBind* method, Object* ptr, real_t* arg1) {
	Vector3 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector3, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector3, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector3), ret_out);
}

MonoArray* godot_icall_2_33(MethodBind* method, Object* ptr, int arg1, int arg2) {
	PoolVector3Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolVector3Array_to_mono_array(ret);
}

MonoArray* godot_icall_2_34(MethodBind* method, Object* ptr, int arg1, int arg2) {
	PoolIntArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolIntArray_to_mono_array(ret);
}

Object* godot_icall_AStar_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AStar");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_35(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_0_36(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_3_37(MethodBind* method, Object* ptr, MonoString* arg1, bool arg2, MonoString* arg3) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { &arg1_in, &arg2, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_1_38(MethodBind* method, Object* ptr, MonoString* arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

void godot_icall_1_39(MethodBind* method, Object* ptr, Object* arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_40(MethodBind* method, Object* ptr, MonoString* arg1) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_AcceptDialog_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AcceptDialog");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_41(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_1_42(MethodBind* method, Object* ptr, real_t* arg1) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_AnimatedSprite_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimatedSprite");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AnimatedSprite3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimatedSprite3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int godot_icall_2_43(MethodBind* method, Object* ptr, int arg1, int arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

NodePath* godot_icall_1_44(MethodBind* method, Object* ptr, int arg1) {
	NodePath ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(NodePath(ret));
}

void godot_icall_2_45(MethodBind* method, Object* ptr, int arg1, NodePath* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_1_46(MethodBind* method, Object* ptr, NodePath* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

void godot_icall_2_47(MethodBind* method, Object* ptr, int arg1, bool arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_5_48(MethodBind* method, Object* ptr, int arg1, real_t arg2, real_t* arg3, real_t* arg4, real_t* arg5) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	MARSHALLED_IN(Vector3, arg3, arg3_in);
	MARSHALLED_IN(Quat, arg4, arg4_in);
	MARSHALLED_IN(Vector3, arg5, arg5_in);
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

void godot_icall_4_49(MethodBind* method, Object* ptr, int arg1, real_t arg2, MonoObject* arg3, real_t arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	double arg4_in = (double)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_50(MethodBind* method, Object* ptr, int arg1, int arg2, MonoObject* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_51(MethodBind* method, Object* ptr, int arg1, int arg2, real_t arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

real_t godot_icall_2_52(MethodBind* method, Object* ptr, int arg1, int arg2) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

MonoObject* godot_icall_2_53(MethodBind* method, Object* ptr, int arg1, int arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

int godot_icall_3_54(MethodBind* method, Object* ptr, int arg1, real_t arg2, bool arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

MonoArray* godot_icall_2_55(MethodBind* method, Object* ptr, int arg1, real_t arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Array_to_mono_array(ret);
}

MonoArray* godot_icall_3_56(MethodBind* method, Object* ptr, int arg1, real_t arg2, real_t arg3) {
	PoolIntArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolIntArray_to_mono_array(ret);
}

MonoString* godot_icall_2_57(MethodBind* method, Object* ptr, int arg1, int arg2) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

MonoArray* godot_icall_2_58(MethodBind* method, Object* ptr, int arg1, int arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Array_to_mono_array(ret);
}

Object* godot_icall_Animation_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Animation");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int godot_icall_2_59(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

void godot_icall_2_60(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_1_61(MethodBind* method, Object* ptr, MonoString* arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

MonoObject* godot_icall_1_62(MethodBind* method, Object* ptr, MonoString* arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoArray* godot_icall_0_63(MethodBind* method, Object* ptr) {
	PoolStringArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoMarshal::PoolStringArray_to_mono_array(ret);
}

MonoString* godot_icall_1_64(MethodBind* method, Object* ptr, MonoString* arg1) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

void godot_icall_3_65(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, real_t arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

real_t godot_icall_2_66(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

void godot_icall_4_67(MethodBind* method, Object* ptr, MonoString* arg1, real_t arg2, real_t arg3, bool arg4) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_68(MethodBind* method, Object* ptr, MonoString* arg1, real_t arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_69(MethodBind* method, Object* ptr, NodePath* arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

NodePath* godot_icall_0_70(MethodBind* method, Object* ptr) {
	NodePath ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return memnew(NodePath(ret));
}

void godot_icall_2_71(MethodBind* method, Object* ptr, real_t arg1, bool arg2) {
	ERR_FAIL_NULL(ptr);
	double arg1_in = (double)arg1;
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

MonoString* godot_icall_1_72(MethodBind* method, Object* ptr, Object* arg1) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

Object* godot_icall_AnimationPlayer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationPlayer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_73(MethodBind* method, Object* ptr, int arg1, MonoString* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_2_74(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

int godot_icall_1_75(MethodBind* method, Object* ptr, MonoString* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

MonoString* godot_icall_2_76(MethodBind* method, Object* ptr, MonoString* arg1, int arg2) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

void godot_icall_2_77(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_78(MethodBind* method, Object* ptr, MonoString* arg1, NodePath* arg2, bool arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[3] = { &arg1_in, arg2, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

real_t godot_icall_1_79(MethodBind* method, Object* ptr, MonoString* arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

void godot_icall_2_80(MethodBind* method, Object* ptr, MonoString* arg1, bool arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_81(MethodBind* method, Object* ptr, MonoString* arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_82(MethodBind* method, Object* ptr, MonoString* arg1) {
	Vector2 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector2, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector2), ret_out);
}

void godot_icall_2_83(MethodBind* method, Object* ptr, MonoString* arg1, int arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_84(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, bool arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_2_85(MethodBind* method, Object* ptr, MonoString* arg1, int arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

int godot_icall_3_86(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, int arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

bool godot_icall_3_87(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, int arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

Object* godot_icall_AnimationTreePlayer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationTreePlayer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_88(MethodBind* method, Object* ptr, real_t* arg1) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector3, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_1_89(MethodBind* method, Object* ptr, Object* arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

Object* godot_icall_Area_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Area");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Area2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Area2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoString* godot_icall_1_90(MethodBind* method, Object* ptr, int arg1) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

void godot_icall_4_91(MethodBind* method, Object* ptr, int arg1, MonoArray* arg2, MonoArray* arg3, int arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Array arg2_in = GDMonoMarshal::mono_array_to_Array(arg2);
	Array arg3_in = GDMonoMarshal::mono_array_to_Array(arg3);
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_92(MethodBind* method, Object* ptr, int arg1, int arg2, MonoArray* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	PoolByteArray arg3_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_93(MethodBind* method, Object* ptr, int arg1, Object* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_94(MethodBind* method, Object* ptr, int arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoArray* godot_icall_1_95(MethodBind* method, Object* ptr, int arg1) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Array_to_mono_array(ret);
}

void godot_icall_1_96(MethodBind* method, Object* ptr, real_t* arg1) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(AABB, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_0_97(MethodBind* method, Object* ptr) {
	AABB ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	MARSHALLED_OUT(AABB, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(AABB), ret_out);
}

Object* godot_icall_ArrayMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ArrayMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_98(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_1_99(MethodBind* method, Object* ptr, real_t* arg1) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Rect2, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_0_100(MethodBind* method, Object* ptr) {
	Rect2 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	MARSHALLED_OUT(Rect2, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Rect2), ret_out);
}

Object* godot_icall_AtlasTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AtlasTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioBusLayout_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioBusLayout");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectAmplify_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectAmplify");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectBandLimitFilter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectBandLimitFilter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectBandPassFilter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectBandPassFilter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectChorus_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectChorus");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectCompressor_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectCompressor");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectDelay_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectDelay");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectDistortion_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectDistortion");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectEQ_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectEQ");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectEQ10_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectEQ10");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectEQ21_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectEQ21");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectEQ6_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectEQ6");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectFilter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectFilter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectHighPassFilter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectHighPassFilter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectHighShelfFilter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectHighShelfFilter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectLimiter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectLimiter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectLowPassFilter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectLowPassFilter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectLowShelfFilter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectLowShelfFilter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectNotchFilter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectNotchFilter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectPanner_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectPanner");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectPhaser_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectPhaser");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectPitchShift_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectPitchShift");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectReverb_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectReverb");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectStereoEnhance_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectStereoEnhance");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_101(MethodBind* method, Object* ptr, int arg1, Object* arg2, int arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_102(MethodBind* method, Object* ptr, int arg1, int arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_3_103(MethodBind* method, Object* ptr, int arg1, int arg2, int arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_0_104(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_AudioServer_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("AudioServer");
}

void godot_icall_1_105(MethodBind* method, Object* ptr, MonoArray* arg1) {
	ERR_FAIL_NULL(ptr);
	PoolByteArray arg1_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoArray* godot_icall_0_106(MethodBind* method, Object* ptr) {
	PoolByteArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoMarshal::PoolByteArray_to_mono_array(ret);
}

Object* godot_icall_AudioStreamOGGVorbis_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioStreamOGGVorbis");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_107(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_AudioStreamPlayer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioStreamPlayer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioStreamPlayer2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioStreamPlayer2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioStreamPlayer3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioStreamPlayer3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioStreamRandomPitch_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioStreamRandomPitch");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioStreamSample_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioStreamSample");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_BackBufferCopy_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "BackBufferCopy");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_108(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_109(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_2_110(MethodBind* method, Object* ptr, real_t* arg1, bool arg2) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_1_111(MethodBind* method, Object* ptr, real_t* arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_2_112(MethodBind* method, Object* ptr, real_t* arg1, bool arg2) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Rect2, arg1, arg1_in);
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_113(MethodBind* method, Object* ptr, MonoObject* arg1) {
	ERR_FAIL_NULL(ptr);
	Dictionary arg1_in = GDMonoMarshal::mono_object_to_Dictionary(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_0_114(MethodBind* method, Object* ptr) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoMarshal::Dictionary_to_mono_object(ret);
}

Object* godot_icall_BitMap_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "BitMap");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_5_115(MethodBind* method, Object* ptr, int arg1, int arg2, real_t* arg3, real_t* arg4, real_t arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	MARSHALLED_IN(Rect2, arg3, arg3_in);
	MARSHALLED_IN(Vector2, arg4, arg4_in);
	double arg5_in = (double)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_116(MethodBind* method, Object* ptr, int arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_2_117(MethodBind* method, Object* ptr, int arg1, int arg2) {
	Vector2 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector2, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector2), ret_out);
}

void godot_icall_1_118(MethodBind* method, Object* ptr, MonoArray* arg1) {
	ERR_FAIL_NULL(ptr);
	PoolIntArray arg1_in = GDMonoMarshal::mono_array_to_PoolIntArray(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoArray* godot_icall_0_119(MethodBind* method, Object* ptr) {
	PoolIntArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoMarshal::PoolIntArray_to_mono_array(ret);
}

void godot_icall_1_120(MethodBind* method, Object* ptr, MonoArray* arg1) {
	ERR_FAIL_NULL(ptr);
	Array arg1_in = GDMonoMarshal::mono_array_to_Array(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_0_121(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_BitmapFont_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "BitmapFont");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_BoneAttachment_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "BoneAttachment");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_BoxShape_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "BoxShape");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Button_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Button");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_122(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_ButtonGroup_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ButtonGroup");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_123(MethodBind* method, Object* ptr, MonoArray* arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	Vector<Variant> varargs;
	int vararg_length = mono_array_length(arg1);
	int total_length = 0 + vararg_length;
	ERR_FAIL_COND_V(varargs.resize(vararg_length) != OK, NULL);
	Vector<Variant*> call_args;
	ERR_FAIL_COND_V(call_args.resize(total_length) != OK, NULL);
	for (int i = 0; i < vararg_length; i++) {
		MonoObject* elem = mono_array_get(arg1, MonoObject*, i);
		varargs.set(i, GDMonoMarshal::mono_object_to_variant(elem));
		call_args.set(0 + i, &varargs[i]);
	}
	Variant::CallError vcall_error;
	ret = method->call(ptr, (const Variant**)call_args.ptr(), total_length, vcall_error);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_CSharpScript_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CSharpScript");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_124(MethodBind* method, Object* ptr, real_t* arg1) {
	Vector3 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector3, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector3), ret_out);
}

MonoObject* godot_icall_1_125(MethodBind* method, Object* ptr, real_t* arg1) {
	Vector2 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector3, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector2, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector2), ret_out);
}

bool godot_icall_1_126(MethodBind* method, Object* ptr, real_t* arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	MARSHALLED_IN(Vector3, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_3_127(MethodBind* method, Object* ptr, real_t arg1, real_t arg2, real_t arg3) {
	ERR_FAIL_NULL(ptr);
	double arg1_in = (double)arg1;
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_0_128(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_Camera_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Camera");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_129(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_Camera2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Camera2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

RID* godot_icall_0_130(MethodBind* method, Object* ptr) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return memnew(RID(ret));
}

void godot_icall_1_131(MethodBind* method, Object* ptr, real_t* arg1) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Color, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_0_132(MethodBind* method, Object* ptr) {
	Color ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	MARSHALLED_OUT(Color, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Color), ret_out);
}

void godot_icall_5_133(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, real_t* arg3, real_t arg4, bool arg5) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	MARSHALLED_IN(Color, arg3, arg3_in);
	double arg4_in = (double)arg4;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_134(MethodBind* method, Object* ptr, MonoArray* arg1, real_t* arg2, real_t arg3, bool arg4) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg1);
	MARSHALLED_IN(Color, arg2, arg2_in);
	double arg3_in = (double)arg3;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_135(MethodBind* method, Object* ptr, MonoArray* arg1, MonoArray* arg2, real_t arg3, bool arg4) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg1);
	PoolColorArray arg2_in = GDMonoMarshal::mono_array_to_PoolColorArray(arg2);
	double arg3_in = (double)arg3;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_136(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, bool arg3) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Rect2, arg1, arg1_in);
	MARSHALLED_IN(Color, arg2, arg2_in);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_137(MethodBind* method, Object* ptr, real_t* arg1, real_t arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	double arg2_in = (double)arg2;
	MARSHALLED_IN(Color, arg3, arg3_in);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_138(MethodBind* method, Object* ptr, Object* arg1, real_t* arg2, real_t* arg3, Object* arg4) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	MARSHALLED_IN(Color, arg3, arg3_in);
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, arg4 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_6_139(MethodBind* method, Object* ptr, Object* arg1, real_t* arg2, bool arg3, real_t* arg4, bool arg5, Object* arg6) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Rect2, arg2, arg2_in);
	MARSHALLED_IN(Color, arg4, arg4_in);
	const void* call_args[6] = { arg1, &arg2_in, &arg3, &arg4_in, &arg5, arg6 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_7_140(MethodBind* method, Object* ptr, Object* arg1, real_t* arg2, real_t* arg3, real_t* arg4, bool arg5, Object* arg6, bool arg7) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Rect2, arg2, arg2_in);
	MARSHALLED_IN(Rect2, arg3, arg3_in);
	MARSHALLED_IN(Color, arg4, arg4_in);
	const void* call_args[7] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5, arg6, &arg7 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_141(MethodBind* method, Object* ptr, Object* arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Rect2, arg2, arg2_in);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_6_142(MethodBind* method, Object* ptr, MonoArray* arg1, MonoArray* arg2, MonoArray* arg3, Object* arg4, real_t arg5, Object* arg6) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg1);
	PoolColorArray arg2_in = GDMonoMarshal::mono_array_to_PoolColorArray(arg2);
	PoolVector2Array arg3_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg3);
	double arg5_in = (double)arg5;
	const void* call_args[6] = { &arg1_in, &arg2_in, &arg3_in, arg4, &arg5_in, arg6 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_6_143(MethodBind* method, Object* ptr, MonoArray* arg1, MonoArray* arg2, MonoArray* arg3, Object* arg4, Object* arg5, bool arg6) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg1);
	PoolColorArray arg2_in = GDMonoMarshal::mono_array_to_PoolColorArray(arg2);
	PoolVector2Array arg3_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg3);
	const void* call_args[6] = { &arg1_in, &arg2_in, &arg3_in, arg4, arg5, &arg6 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_6_144(MethodBind* method, Object* ptr, MonoArray* arg1, real_t* arg2, MonoArray* arg3, Object* arg4, Object* arg5, bool arg6) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg1);
	MARSHALLED_IN(Color, arg2, arg2_in);
	PoolVector2Array arg3_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg3);
	const void* call_args[6] = { &arg1_in, &arg2_in, &arg3_in, arg4, arg5, &arg6 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_5_145(MethodBind* method, Object* ptr, Object* arg1, real_t* arg2, MonoString* arg3, real_t* arg4, int arg5) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	MARSHALLED_IN(Color, arg4, arg4_in);
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

real_t godot_icall_5_146(MethodBind* method, Object* ptr, Object* arg1, real_t* arg2, MonoString* arg3, MonoString* arg4, real_t* arg5) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	String arg4_in = GDMonoMarshal::mono_string_to_godot(arg4);
	MARSHALLED_IN(Color, arg5, arg5_in);
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

void godot_icall_3_147(MethodBind* method, Object* ptr, real_t* arg1, real_t arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	double arg2_in = (double)arg2;
	MARSHALLED_IN(Vector2, arg3, arg3_in);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_148(MethodBind* method, Object* ptr, real_t* arg1) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Transform2D, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_0_149(MethodBind* method, Object* ptr) {
	Transform2D ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	MARSHALLED_OUT(Transform2D, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Transform2D), ret_out);
}

MonoObject* godot_icall_0_150(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_151(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_1_152(MethodBind* method, Object* ptr, real_t* arg1) {
	Vector2 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector2, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector2), ret_out);
}

MonoObject* godot_icall_1_153(MethodBind* method, Object* ptr, Object* arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_CanvasItemMaterial_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CanvasItemMaterial");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CanvasLayer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CanvasLayer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CanvasModulate_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CanvasModulate");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CapsuleMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CapsuleMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CapsuleShape_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CapsuleShape");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CapsuleShape2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CapsuleShape2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CenterContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CenterContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CheckBox_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CheckBox");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CheckButton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CheckButton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CircleShape2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CircleShape2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int godot_icall_1_154(MethodBind* method, Object* ptr, Object* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

void godot_icall_2_155(MethodBind* method, Object* ptr, int arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	MARSHALLED_IN(Transform, arg2, arg2_in);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_156(MethodBind* method, Object* ptr, int arg1) {
	Transform ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Transform, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Transform), ret_out);
}

MonoObject* godot_icall_1_157(MethodBind* method, Object* ptr, int arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_2_158(MethodBind* method, Object* ptr, int arg1, int arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_2_159(MethodBind* method, Object* ptr, int arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	MARSHALLED_IN(Transform2D, arg2, arg2_in);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_160(MethodBind* method, Object* ptr, int arg1) {
	Transform2D ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Transform2D, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Transform2D), ret_out);
}

MonoObject* godot_icall_2_161(MethodBind* method, Object* ptr, int arg1, int arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_1_162(MethodBind* method, Object* ptr, MonoArray* arg1) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoArray* godot_icall_0_163(MethodBind* method, Object* ptr) {
	PoolVector2Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoMarshal::PoolVector2Array_to_mono_array(ret);
}

Object* godot_icall_CollisionPolygon_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CollisionPolygon");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CollisionPolygon2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CollisionPolygon2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_164(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_CollisionShape_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CollisionShape");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_165(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_CollisionShape2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CollisionShape2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ColorPicker_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ColorPicker");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_166(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_ColorPickerButton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ColorPickerButton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ColorRect_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ColorRect");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_167(MethodBind* method, Object* ptr, MonoArray* arg1) {
	ERR_FAIL_NULL(ptr);
	PoolVector3Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector3Array(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoArray* godot_icall_0_168(MethodBind* method, Object* ptr) {
	PoolVector3Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoMarshal::PoolVector3Array_to_mono_array(ret);
}

Object* godot_icall_ConcavePolygonShape_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ConcavePolygonShape");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ConcavePolygonShape2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ConcavePolygonShape2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ConeTwistJoint_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ConeTwistJoint");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_169(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, MonoObject* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_3_170(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, MonoObject* arg3) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

bool godot_icall_2_171(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

MonoArray* godot_icall_1_172(MethodBind* method, Object* ptr, MonoString* arg1) {
	PoolStringArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolStringArray_to_mono_array(ret);
}

Object* godot_icall_ConfigFile_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ConfigFile");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ConfirmationDialog_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ConfirmationDialog");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_173(MethodBind* method, Object* ptr, Object* arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Rect2, arg2, arg2_in);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_Container_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Container");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_4_174(MethodBind* method, Object* ptr, int arg1, real_t arg2, bool arg3, bool arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3, &arg4 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_175(MethodBind* method, Object* ptr, int arg1, real_t arg2, real_t arg3, bool arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4 };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_0_176(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_0_177(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_2_178(MethodBind* method, Object* ptr, MonoString* arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	MARSHALLED_IN(Color, arg2, arg2_in);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_179(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_2_180(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_2_181(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_2_182(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2) {
	Color ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Color, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Color), ret_out);
}

MonoString* godot_icall_1_183(MethodBind* method, Object* ptr, real_t* arg1) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

int godot_icall_1_184(MethodBind* method, Object* ptr, real_t* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

void godot_icall_2_185(MethodBind* method, Object* ptr, MonoObject* arg1, Object* arg2) {
	ERR_FAIL_NULL(ptr);
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_Control_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Control");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ConvexPolygonShape_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ConvexPolygonShape");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ConvexPolygonShape2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ConvexPolygonShape2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_186(MethodBind* method, Object* ptr, int arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_CubeMap_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CubeMap");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CubeMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CubeMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int godot_icall_5_187(MethodBind* method, Object* ptr, real_t* arg1, real_t arg2, real_t arg3, int arg4, int arg5) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

MonoObject* godot_icall_1_188(MethodBind* method, Object* ptr, int arg1) {
	Vector2 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector2, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector2), ret_out);
}

int godot_icall_2_189(MethodBind* method, Object* ptr, int arg1, real_t arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

real_t godot_icall_1_190(MethodBind* method, Object* ptr, real_t arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	double arg1_in = (double)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

Object* godot_icall_Curve_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Curve");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_4_191(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, real_t* arg3, int arg4) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	MARSHALLED_IN(Vector2, arg3, arg3_in);
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_192(MethodBind* method, Object* ptr, int arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_193(MethodBind* method, Object* ptr, int arg1, real_t arg2) {
	Vector2 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector2, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector2), ret_out);
}

MonoObject* godot_icall_1_194(MethodBind* method, Object* ptr, real_t arg1) {
	Vector2 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	double arg1_in = (double)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector2, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector2), ret_out);
}

MonoObject* godot_icall_2_195(MethodBind* method, Object* ptr, real_t arg1, bool arg2) {
	Vector2 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	double arg1_in = (double)arg1;
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector2, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector2), ret_out);
}

MonoArray* godot_icall_2_196(MethodBind* method, Object* ptr, int arg1, real_t arg2) {
	PoolVector2Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolVector2Array_to_mono_array(ret);
}

Object* godot_icall_Curve2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Curve2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_4_197(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, real_t* arg3, int arg4) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector3, arg1, arg1_in);
	MARSHALLED_IN(Vector3, arg2, arg2_in);
	MARSHALLED_IN(Vector3, arg3, arg3_in);
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_198(MethodBind* method, Object* ptr, int arg1, real_t arg2) {
	Vector3 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector3, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector3), ret_out);
}

MonoObject* godot_icall_1_199(MethodBind* method, Object* ptr, real_t arg1) {
	Vector3 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	double arg1_in = (double)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector3, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector3), ret_out);
}

MonoObject* godot_icall_2_200(MethodBind* method, Object* ptr, real_t arg1, bool arg2) {
	Vector3 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	double arg1_in = (double)arg1;
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector3, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector3), ret_out);
}

MonoArray* godot_icall_0_201(MethodBind* method, Object* ptr) {
	PoolRealArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoMarshal::PoolRealArray_to_mono_array(ret);
}

MonoArray* godot_icall_2_202(MethodBind* method, Object* ptr, int arg1, real_t arg2) {
	PoolVector3Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolVector3Array_to_mono_array(ret);
}

Object* godot_icall_Curve3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Curve3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_203(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_CurveTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CurveTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CylinderMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CylinderMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_DampedSpringJoint2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "DampedSpringJoint2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_DirectionalLight_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "DirectionalLight");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_204(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_1_205(MethodBind* method, Object* ptr, int arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_DynamicFont_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "DynamicFont");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_DynamicFontData_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "DynamicFontData");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

#ifdef TOOLS_ENABLED
void godot_icall_2_206(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	PoolStringArray arg2_in = GDMonoMarshal::mono_array_to_PoolStringArray(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_3_207(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2, bool arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	PoolByteArray arg2_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg2);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
Object* godot_icall_EditorExportPlugin_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorExportPlugin");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_208(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_EditorFileDialog_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorFileDialog");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_209(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_1_210(MethodBind* method, Object* ptr, MonoString* arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_1_211(MethodBind* method, Object* ptr, int arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
Object* godot_icall_EditorFileSystemDirectory_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorFileSystemDirectory");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_EditorImportPlugin_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorImportPlugin");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

#ifdef TOOLS_ENABLED
void godot_icall_2_212(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_213(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_214(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_215(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_216(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_217(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoArray* godot_icall_2_218(MethodBind* method, Object* ptr, MonoArray* arg1, int arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Array arg1_in = GDMonoMarshal::mono_array_to_Array(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Array_to_mono_array(ret);
}

#endif // TOOLS_ENABLED
void godot_icall_2_219(MethodBind* method, Object* ptr, int arg1, Object* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

#ifdef TOOLS_ENABLED
MonoObject* godot_icall_2_220(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_2_221(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_4_222(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, Object* arg3, Object* arg4) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[4] = { &arg1_in, &arg2_in, arg3, arg4 };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_223(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_224(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
Object* godot_icall_EditorPlugin_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorPlugin");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_EditorResourceConversionPlugin_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorResourceConversionPlugin");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

#ifdef TOOLS_ENABLED
void godot_icall_4_225(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2, MonoString* arg3, MonoObject* arg4) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	Variant arg4_in = GDMonoMarshal::mono_object_to_variant(arg4);
	const void* call_args[4] = { &arg1_in, arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_4_226(MethodBind* method, Object* ptr, Object* arg1, Object* arg2, MonoString* arg3, MonoObject* arg4) {
	ERR_FAIL_NULL(ptr);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	Variant arg4_in = GDMonoMarshal::mono_object_to_variant(arg4);
	const void* call_args[4] = { arg1, arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
Object* godot_icall_EditorResourcePreviewGenerator_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorResourcePreviewGenerator");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_EditorScenePostImport_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorScenePostImport");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_EditorScript_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorScript");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_EditorSelection_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorSelection");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_227(MethodBind* method, Object* ptr, MonoString* arg1, MonoObject* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_228(MethodBind* method, Object* ptr, MonoString* arg1) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

void godot_icall_1_229(MethodBind* method, Object* ptr, MonoArray* arg1) {
	ERR_FAIL_NULL(ptr);
	PoolStringArray arg1_in = GDMonoMarshal::mono_array_to_PoolStringArray(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

#ifdef TOOLS_ENABLED
void godot_icall_3_230(MethodBind* method, Object* ptr, MonoArray* arg1, Object* arg2, bool arg3) {
	ERR_FAIL_NULL(ptr);
	PoolVector3Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector3Array(arg1);
	const void* call_args[3] = { &arg1_in, arg2, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_3_231(MethodBind* method, Object* ptr, Object* arg1, bool arg2, RID* arg3) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[3] = { arg1, &arg2, arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_2_232(MethodBind* method, Object* ptr, Object* arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(AABB, arg2, arg2_in);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_2_233(MethodBind* method, Object* ptr, Object* arg1, real_t arg2) {
	ERR_FAIL_NULL(ptr);
	double arg2_in = (double)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_3_234(MethodBind* method, Object* ptr, MonoArray* arg1, bool arg2, bool arg3) {
	ERR_FAIL_NULL(ptr);
	PoolVector3Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector3Array(arg1);
	const void* call_args[3] = { &arg1_in, &arg2, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
Object* godot_icall_EditorSpatialGizmo_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorSpatialGizmo");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_EncodedObjectAsID_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EncodedObjectAsID");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_235(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_Environment_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Environment");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_FileDialog_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "FileDialog");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_5_236(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2, MonoString* arg3, real_t* arg4, int arg5) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	MARSHALLED_IN(Color, arg4, arg4_in);
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

real_t godot_icall_5_237(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2, int arg3, int arg4, real_t* arg5) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	MARSHALLED_IN(Color, arg5, arg5_in);
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

MonoObject* godot_icall_1_238(MethodBind* method, Object* ptr, MonoArray* arg1) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Vector<Variant> varargs;
	int vararg_length = mono_array_length(arg1);
	int total_length = 0 + vararg_length;
	ERR_FAIL_COND_V(varargs.resize(vararg_length) != OK, NULL);
	Vector<Variant*> call_args;
	ERR_FAIL_COND_V(call_args.resize(total_length) != OK, NULL);
	for (int i = 0; i < vararg_length; i++) {
		MonoObject* elem = mono_array_get(arg1, MonoObject*, i);
		varargs.set(i, GDMonoMarshal::mono_object_to_variant(elem));
		call_args.set(0 + i, &varargs[i]);
	}
	Variant::CallError vcall_error;
	ret = method->call(ptr, (const Variant**)call_args.ptr(), total_length, vcall_error);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

Object* godot_icall_FuncRef_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "FuncRef");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_239(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_3_240(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, MonoArray* arg3) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Array arg3_in = GDMonoMarshal::mono_array_to_Array(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

Object* godot_icall_GDNative_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GDNative");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_241(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_GDNativeLibrary_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GDNativeLibrary");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_GDScript_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GDScript");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_242(MethodBind* method, Object* ptr, MonoObject* arg1) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

bool godot_icall_1_243(MethodBind* method, Object* ptr, bool arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

MonoObject* godot_icall_0_244(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_2_245(MethodBind* method, Object* ptr, Object* arg1, bool arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_GIProbe_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GIProbe");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_246(MethodBind* method, Object* ptr, real_t* arg1) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Transform, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_GIProbeData_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GIProbeData");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Generic6DOFJoint_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Generic6DOFJoint");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_247(MethodBind* method, Object* ptr, real_t arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	double arg1_in = (double)arg1;
	MARSHALLED_IN(Color, arg2, arg2_in);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_248(MethodBind* method, Object* ptr, int arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	MARSHALLED_IN(Color, arg2, arg2_in);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_249(MethodBind* method, Object* ptr, int arg1) {
	Color ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Color, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Color), ret_out);
}

MonoObject* godot_icall_1_250(MethodBind* method, Object* ptr, real_t arg1) {
	Color ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	double arg1_in = (double)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Color, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Color), ret_out);
}

void godot_icall_1_251(MethodBind* method, Object* ptr, MonoArray* arg1) {
	ERR_FAIL_NULL(ptr);
	PoolRealArray arg1_in = GDMonoMarshal::mono_array_to_PoolRealArray(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_252(MethodBind* method, Object* ptr, MonoArray* arg1) {
	ERR_FAIL_NULL(ptr);
	PoolColorArray arg1_in = GDMonoMarshal::mono_array_to_PoolColorArray(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoArray* godot_icall_0_253(MethodBind* method, Object* ptr) {
	PoolColorArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoMarshal::PoolColorArray_to_mono_array(ret);
}

Object* godot_icall_Gradient_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Gradient");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_254(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_GradientTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GradientTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int godot_icall_4_255(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, MonoString* arg3, int arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

bool godot_icall_4_256(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, MonoString* arg3, int arg4) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_4_257(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, MonoString* arg3, int arg4) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_GraphEdit_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GraphEdit");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_9_258(MethodBind* method, Object* ptr, int arg1, bool arg2, int arg3, real_t* arg4, bool arg5, int arg6, real_t* arg7, Object* arg8, Object* arg9) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg3_in = (int64_t)arg3;
	MARSHALLED_IN(Color, arg4, arg4_in);
	int64_t arg6_in = (int64_t)arg6;
	MARSHALLED_IN(Color, arg7, arg7_in);
	const void* call_args[9] = { &arg1_in, &arg2, &arg3_in, &arg4_in, &arg5, &arg6_in, &arg7_in, arg8, arg9 };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_GraphNode_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GraphNode");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_GridContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GridContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_259(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_5_260(MethodBind* method, Object* ptr, int arg1, int arg2, int arg3, int arg4, int arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_3_261(MethodBind* method, Object* ptr, int arg1, int arg2, int arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

MonoObject* godot_icall_3_262(MethodBind* method, Object* ptr, int arg1, int arg2, int arg3) {
	Vector3 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector3, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector3), ret_out);
}

void godot_icall_4_263(MethodBind* method, Object* ptr, bool arg1, bool arg2, int arg3, int arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1, &arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_GridMap_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GridMap");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_GrooveJoint2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GrooveJoint2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_HBoxContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HBoxContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_HScrollBar_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HScrollBar");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_HSeparator_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HSeparator");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_HSlider_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HSlider");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_HSplitContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HSplitContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int godot_icall_4_264(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, bool arg3, bool arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3, &arg4 };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

MonoObject* godot_icall_0_265(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int godot_icall_4_266(MethodBind* method, Object* ptr, int arg1, MonoString* arg2, MonoArray* arg3, MonoArray* arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	PoolStringArray arg3_in = GDMonoMarshal::mono_array_to_PoolStringArray(arg3);
	PoolByteArray arg4_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

int godot_icall_4_267(MethodBind* method, Object* ptr, int arg1, MonoString* arg2, MonoArray* arg3, MonoString* arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	PoolStringArray arg3_in = GDMonoMarshal::mono_array_to_PoolStringArray(arg3);
	String arg4_in = GDMonoMarshal::mono_string_to_godot(arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

MonoString* godot_icall_1_268(MethodBind* method, Object* ptr, MonoObject* arg1) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Dictionary arg1_in = GDMonoMarshal::mono_object_to_Dictionary(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

Object* godot_icall_HTTPClient_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HTTPClient");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int godot_icall_5_269(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2, bool arg3, int arg4, MonoString* arg5) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	PoolStringArray arg2_in = GDMonoMarshal::mono_array_to_PoolStringArray(arg2);
	int64_t arg4_in = (int64_t)arg4;
	String arg5_in = GDMonoMarshal::mono_string_to_godot(arg5);
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

Object* godot_icall_HTTPRequest_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HTTPRequest");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_HingeJoint_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HingeJoint");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int godot_icall_2_270(MethodBind* method, Object* ptr, MonoString* arg1, int arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

Object* godot_icall_IP_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("IP");
}

void godot_icall_4_271(MethodBind* method, Object* ptr, int arg1, int arg2, bool arg3, int arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_5_272(MethodBind* method, Object* ptr, int arg1, int arg2, bool arg3, int arg4, MonoArray* arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg4_in = (int64_t)arg4;
	PoolByteArray arg5_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg5);
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_3_273(MethodBind* method, Object* ptr, int arg1, int arg2, real_t arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

void godot_icall_3_274(MethodBind* method, Object* ptr, Object* arg1, real_t* arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Rect2, arg2, arg2_in);
	MARSHALLED_IN(Vector2, arg3, arg3_in);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_275(MethodBind* method, Object* ptr, Object* arg1, Object* arg2, real_t* arg3, real_t* arg4) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Rect2, arg3, arg3_in);
	MARSHALLED_IN(Vector2, arg4, arg4_in);
	const void* call_args[4] = { arg1, arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_276(MethodBind* method, Object* ptr, real_t* arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Rect2, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_3_277(MethodBind* method, Object* ptr, int arg1, int arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	MARSHALLED_IN(Color, arg3, arg3_in);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_278(MethodBind* method, Object* ptr, int arg1, int arg2) {
	Color ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Color, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Color), ret_out);
}

Object* godot_icall_Image_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Image");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_4_279(MethodBind* method, Object* ptr, int arg1, int arg2, int arg3, int arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_280(MethodBind* method, Object* ptr, Object* arg1, int arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_ImageTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ImageTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_281(MethodBind* method, Object* ptr, real_t* arg1) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Plane, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_282(MethodBind* method, Object* ptr, int arg1, int arg2, real_t arg3, bool arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	double arg3_in = (double)arg3;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4 };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_ImmediateGeometry_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ImmediateGeometry");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_4_283(MethodBind* method, Object* ptr, int arg1, bool arg2, MonoString* arg3, MonoString* arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	String arg4_in = GDMonoMarshal::mono_string_to_godot(arg4);
	const void* call_args[4] = { &arg1_in, &arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_284(MethodBind* method, Object* ptr, int arg1, real_t arg2, real_t arg3, real_t arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	double arg4_in = (double)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_285(MethodBind* method, Object* ptr, Object* arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_Input_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("Input");
}

bool godot_icall_1_286(MethodBind* method, Object* ptr, Object* arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

MonoObject* godot_icall_2_287(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Transform2D, arg1, arg1_in);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_InputEventAction_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InputEventAction");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_InputEventJoypadButton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InputEventJoypadButton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_InputEventJoypadMotion_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InputEventJoypadMotion");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_InputEventKey_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InputEventKey");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_InputEventMagnifyGesture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InputEventMagnifyGesture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_InputEventMouseButton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InputEventMouseButton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_InputEventMouseMotion_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InputEventMouseMotion");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_InputEventPanGesture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InputEventPanGesture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_InputEventScreenDrag_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InputEventScreenDrag");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_InputEventScreenTouch_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InputEventScreenTouch");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

bool godot_icall_2_288(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

MonoArray* godot_icall_1_289(MethodBind* method, Object* ptr, MonoString* arg1) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Array_to_mono_array(ret);
}

bool godot_icall_2_290(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

Object* godot_icall_InputMap_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("InputMap");
}

MonoObject* godot_icall_1_291(MethodBind* method, Object* ptr, bool arg1) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Dictionary_to_mono_object(ret);
}

Object* godot_icall_InterpolatedCamera_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InterpolatedCamera");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_292(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2, bool arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[3] = { &arg1_in, arg2, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_293(MethodBind* method, Object* ptr, Object* arg1, bool arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_294(MethodBind* method, Object* ptr, int arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	MARSHALLED_IN(Rect2, arg2, arg2_in);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_295(MethodBind* method, Object* ptr, int arg1) {
	Rect2 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Rect2, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Rect2), ret_out);
}

void godot_icall_2_296(MethodBind* method, Object* ptr, int arg1, MonoObject* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_297(MethodBind* method, Object* ptr, int arg1) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

int godot_icall_2_298(MethodBind* method, Object* ptr, real_t* arg1, bool arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

MonoObject* godot_icall_0_299(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_ItemList_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ItemList");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_300(MethodBind* method, Object* ptr) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

void godot_icall_1_301(MethodBind* method, Object* ptr, MonoObject* arg1) {
	ERR_FAIL_NULL(ptr);
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_JSONParseResult_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "JSONParseResult");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_2_302(MethodBind* method, Object* ptr, MonoString* arg1, bool arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

Object* godot_icall_JavaScript_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("JavaScript");
}

MonoObject* godot_icall_1_303(MethodBind* method, Object* ptr, real_t* arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector3, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_5_304(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, real_t arg3, int arg4, real_t arg5) {
	Vector3 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector3, arg1, arg1_in);
	MARSHALLED_IN(Vector3, arg2, arg2_in);
	double arg3_in = (double)arg3;
	int64_t arg4_in = (int64_t)arg4;
	double arg5_in = (double)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector3, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector3), ret_out);
}

bool godot_icall_2_305(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	MARSHALLED_IN(Transform, arg1, arg1_in);
	MARSHALLED_IN(Vector3, arg2, arg2_in);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

MonoObject* godot_icall_1_306(MethodBind* method, Object* ptr, int arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_KinematicBody_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "KinematicBody");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_307(MethodBind* method, Object* ptr, real_t* arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_5_308(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, real_t arg3, int arg4, real_t arg5) {
	Vector2 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	double arg3_in = (double)arg3;
	int64_t arg4_in = (int64_t)arg4;
	double arg5_in = (double)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector2, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector2), ret_out);
}

bool godot_icall_2_309(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	MARSHALLED_IN(Transform2D, arg1, arg1_in);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

MonoObject* godot_icall_1_310(MethodBind* method, Object* ptr, int arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_KinematicBody2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "KinematicBody2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_311(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_KinematicCollision_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "KinematicCollision");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_KinematicCollision2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "KinematicCollision2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Label_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Label");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int godot_icall_2_312(MethodBind* method, Object* ptr, real_t* arg1, Object* arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

Object* godot_icall_LargeTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "LargeTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Light2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Light2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_313(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_LightOccluder2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "LightOccluder2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Line2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Line2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_314(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_LineEdit_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "LineEdit");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_LineShape2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "LineShape2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_LinkButton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "LinkButton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Listener_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Listener");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

bool godot_icall_1_315(MethodBind* method, Object* ptr, real_t arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	double arg1_in = (double)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

Object* godot_icall_MainLoop_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MainLoop");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_MarginContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MarginContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_MenuButton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MenuButton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_316(MethodBind* method, Object* ptr, real_t arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	double arg1_in = (double)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_317(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int godot_icall_2_318(MethodBind* method, Object* ptr, Object* arg1, int arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

int godot_icall_1_319(MethodBind* method, Object* ptr, Object* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

void godot_icall_2_320(MethodBind* method, Object* ptr, int arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	MARSHALLED_IN(Plane, arg2, arg2_in);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_321(MethodBind* method, Object* ptr, int arg1) {
	Plane ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Plane, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Plane), ret_out);
}

void godot_icall_2_322(MethodBind* method, Object* ptr, int arg1, MonoArray* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	PoolIntArray arg2_in = GDMonoMarshal::mono_array_to_PoolIntArray(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_323(MethodBind* method, Object* ptr, int arg1, MonoArray* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	PoolRealArray arg2_in = GDMonoMarshal::mono_array_to_PoolRealArray(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoArray* godot_icall_1_324(MethodBind* method, Object* ptr, int arg1) {
	PoolRealArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolRealArray_to_mono_array(ret);
}

Object* godot_icall_MeshDataTool_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MeshDataTool");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_325(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_MeshInstance_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MeshInstance");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_326(MethodBind* method, Object* ptr, int arg1, MonoArray* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Array arg2_in = GDMonoMarshal::mono_array_to_Array(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_327(MethodBind* method, Object* ptr, int arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_1_328(MethodBind* method, Object* ptr, int arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_MeshLibrary_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MeshLibrary");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_MobileVRInterface_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MobileVRInterface");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_MultiMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MultiMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_329(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_MultiMeshInstance_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MultiMeshInstance");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_NativeScript_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "NativeScript");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int godot_icall_3_330(MethodBind* method, Object* ptr, Object* arg1, real_t* arg2, Object* arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	MARSHALLED_IN(Transform, arg2, arg2_in);
	const void* call_args[3] = { arg1, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

MonoArray* godot_icall_3_331(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, bool arg3) {
	PoolVector3Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector3, arg1, arg1_in);
	MARSHALLED_IN(Vector3, arg2, arg2_in);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolVector3Array_to_mono_array(ret);
}

MonoObject* godot_icall_3_332(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, bool arg3) {
	Vector3 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector3, arg1, arg1_in);
	MARSHALLED_IN(Vector3, arg2, arg2_in);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3 };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector3, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector3), ret_out);
}

MonoObject* godot_icall_1_333(MethodBind* method, Object* ptr, real_t* arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector3, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_Navigation_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Navigation");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int godot_icall_3_334(MethodBind* method, Object* ptr, Object* arg1, real_t* arg2, Object* arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	MARSHALLED_IN(Transform2D, arg2, arg2_in);
	const void* call_args[3] = { arg1, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

MonoArray* godot_icall_3_335(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, bool arg3) {
	PoolVector2Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolVector2Array_to_mono_array(ret);
}

MonoObject* godot_icall_1_336(MethodBind* method, Object* ptr, real_t* arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_Navigation2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Navigation2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_NavigationMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "NavigationMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_337(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_NavigationMeshInstance_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "NavigationMeshInstance");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_338(MethodBind* method, Object* ptr, MonoArray* arg1, int arg2) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_339(MethodBind* method, Object* ptr, int arg1, MonoArray* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	PoolVector2Array arg2_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoArray* godot_icall_1_340(MethodBind* method, Object* ptr, int arg1) {
	PoolVector2Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolVector2Array_to_mono_array(ret);
}

Object* godot_icall_NavigationPolygon_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "NavigationPolygon");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_341(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_NavigationPolygonInstance_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "NavigationPolygonInstance");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int godot_icall_4_342(MethodBind* method, Object* ptr, int arg1, int arg2, int arg3, int arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

int godot_icall_4_343(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, int arg3, int arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

Object* godot_icall_NetworkedMultiplayerENet_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "NetworkedMultiplayerENet");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_NinePatchRect_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "NinePatchRect");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_344(MethodBind* method, Object* ptr, Object* arg1, Object* arg2, bool arg3) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[3] = { arg1, arg2, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_345(MethodBind* method, Object* ptr, int arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

bool godot_icall_1_346(MethodBind* method, Object* ptr, NodePath* arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

MonoObject* godot_icall_1_347(MethodBind* method, Object* ptr, NodePath* arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_3_348(MethodBind* method, Object* ptr, MonoString* arg1, bool arg2, bool arg3) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[3] = { &arg1_in, &arg2, &arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoArray* godot_icall_1_349(MethodBind* method, Object* ptr, NodePath* arg1) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Array_to_mono_array(ret);
}

NodePath* godot_icall_1_350(MethodBind* method, Object* ptr, Object* arg1) {
	NodePath ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(NodePath(ret));
}

void godot_icall_2_351(MethodBind* method, Object* ptr, Object* arg1, int arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_352(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2, bool arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	Array arg2_in = GDMonoMarshal::mono_array_to_Array(arg2);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_0_353(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_0_354(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_2_355(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Vector<Variant> varargs;
	int vararg_length = mono_array_length(arg2);
	int total_length = 1 + vararg_length;
	ERR_FAIL_COND_V(varargs.resize(vararg_length) != OK, NULL);
	Vector<Variant*> call_args;
	ERR_FAIL_COND_V(call_args.resize(total_length) != OK, NULL);
	Variant arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	call_args.set(0, &arg1_in);
	for (int i = 0; i < vararg_length; i++) {
		MonoObject* elem = mono_array_get(arg2, MonoObject*, i);
		varargs.set(i, GDMonoMarshal::mono_object_to_variant(elem));
		call_args.set(1 + i, &varargs[i]);
	}
	Variant::CallError vcall_error;
	ret = method->call(ptr, (const Variant**)call_args.ptr(), total_length, vcall_error);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

MonoObject* godot_icall_3_356(MethodBind* method, Object* ptr, int arg1, MonoString* arg2, MonoArray* arg3) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Vector<Variant> varargs;
	int vararg_length = mono_array_length(arg3);
	int total_length = 2 + vararg_length;
	ERR_FAIL_COND_V(varargs.resize(vararg_length) != OK, NULL);
	Vector<Variant*> call_args;
	ERR_FAIL_COND_V(call_args.resize(total_length) != OK, NULL);
	Variant arg1_in = (Variant)arg1;
	call_args.set(0, &arg1_in);
	Variant arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	call_args.set(0, &arg2_in);
	for (int i = 0; i < vararg_length; i++) {
		MonoObject* elem = mono_array_get(arg3, MonoObject*, i);
		varargs.set(i, GDMonoMarshal::mono_object_to_variant(elem));
		call_args.set(2 + i, &varargs[i]);
	}
	Variant::CallError vcall_error;
	ret = method->call(ptr, (const Variant**)call_args.ptr(), total_length, vcall_error);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

void godot_icall_3_357(MethodBind* method, Object* ptr, int arg1, MonoString* arg2, MonoObject* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_Node_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Node");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

real_t godot_icall_1_358(MethodBind* method, Object* ptr, real_t* arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

MonoObject* godot_icall_1_359(MethodBind* method, Object* ptr, Object* arg1) {
	Transform2D ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Transform2D, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Transform2D), ret_out);
}

Object* godot_icall_Node2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Node2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_360(MethodBind* method, Object* ptr, NodePath* arg1, MonoObject* arg2) {
	ERR_FAIL_NULL(ptr);
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_361(MethodBind* method, Object* ptr, NodePath* arg1) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

MonoObject* godot_icall_0_362(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_2_363(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	Array arg2_in = GDMonoMarshal::mono_array_to_Array(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_364(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	Array arg2_in = GDMonoMarshal::mono_array_to_Array(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

int godot_icall_5_365(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2, MonoString* arg3, MonoArray* arg4, int arg5) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	Array arg4_in = GDMonoMarshal::mono_array_to_Array(arg4);
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { &arg1_in, arg2, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

void godot_icall_3_366(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2, MonoString* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_3_367(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2, MonoString* arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

Object* godot_icall_Object_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Object");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_OccluderPolygon2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "OccluderPolygon2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_OmniLight_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "OmniLight");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_368(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, int arg3) {
	ERR_FAIL_NULL(ptr);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_OptionButton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "OptionButton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int godot_icall_1_369(MethodBind* method, Object* ptr, bool arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

Object* godot_icall_PCKPacker_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PCKPacker");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PHashTranslation_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PHashTranslation");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int godot_icall_1_370(MethodBind* method, Object* ptr, MonoObject* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

Object* godot_icall_PackedDataContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PackedDataContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_371(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_PackedScene_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PackedScene");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int godot_icall_1_372(MethodBind* method, Object* ptr, MonoArray* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	PoolByteArray arg1_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

Object* godot_icall_PacketPeerStream_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PacketPeerStream");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int godot_icall_3_373(MethodBind* method, Object* ptr, int arg1, MonoString* arg2, int arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

Object* godot_icall_PacketPeerUDP_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PacketPeerUDP");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Panel_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Panel");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PanelContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PanelContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PanoramaSky_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PanoramaSky");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ParallaxBackground_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ParallaxBackground");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ParallaxLayer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ParallaxLayer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Particles_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Particles");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Particles2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Particles2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_374(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_375(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_ParticlesMaterial_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ParticlesMaterial");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_376(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_Path_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Path");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_377(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_Path2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Path2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PathFollow_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PathFollow");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PathFollow2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PathFollow2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Performance_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("Performance");
}

RID* godot_icall_1_378(MethodBind* method, Object* ptr, int arg1) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

MonoObject* godot_icall_0_379(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoArray* godot_icall_4_380(MethodBind* method, Object* ptr, real_t* arg1, int arg2, MonoArray* arg3, int arg4) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	int64_t arg2_in = (int64_t)arg2;
	Array arg3_in = GDMonoMarshal::mono_array_to_Array(arg3);
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Array_to_mono_array(ret);
}

MonoObject* godot_icall_4_381(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, MonoArray* arg3, int arg4) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	Array arg3_in = GDMonoMarshal::mono_array_to_Array(arg3);
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Dictionary_to_mono_object(ret);
}

MonoArray* godot_icall_2_382(MethodBind* method, Object* ptr, Object* arg1, int arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Array_to_mono_array(ret);
}

MonoArray* godot_icall_1_383(MethodBind* method, Object* ptr, Object* arg1) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Array_to_mono_array(ret);
}

MonoObject* godot_icall_1_384(MethodBind* method, Object* ptr, Object* arg1) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Dictionary_to_mono_object(ret);
}

void godot_icall_2_385(MethodBind* method, Object* ptr, RID* arg1, MonoObject* arg2) {
	ERR_FAIL_NULL(ptr);
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_1_386(MethodBind* method, Object* ptr, RID* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

MonoObject* godot_icall_1_387(MethodBind* method, Object* ptr, RID* arg1) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

void godot_icall_2_388(MethodBind* method, Object* ptr, RID* arg1, bool arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_1_389(MethodBind* method, Object* ptr, RID* arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_3_390(MethodBind* method, Object* ptr, RID* arg1, int arg2, real_t arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	double arg3_in = (double)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

real_t godot_icall_2_391(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

MonoObject* godot_icall_1_392(MethodBind* method, Object* ptr, RID* arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

void godot_icall_2_393(MethodBind* method, Object* ptr, RID* arg1, RID* arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { arg1, arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

RID* godot_icall_1_394(MethodBind* method, Object* ptr, RID* arg1) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

void godot_icall_2_395(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_396(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Transform2D, arg3, arg3_in);
	const void* call_args[3] = { arg1, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_397(MethodBind* method, Object* ptr, RID* arg1, int arg2, RID* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[3] = { arg1, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_398(MethodBind* method, Object* ptr, RID* arg1, int arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	MARSHALLED_IN(Transform2D, arg3, arg3_in);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_399(MethodBind* method, Object* ptr, RID* arg1, int arg2, bool arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[3] = { arg1, &arg2_in, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

RID* godot_icall_2_400(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

MonoObject* godot_icall_2_401(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	Transform2D ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Transform2D, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Transform2D), ret_out);
}

void godot_icall_1_402(MethodBind* method, Object* ptr, RID* arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_403(MethodBind* method, Object* ptr, RID* arg1, int arg2, MonoObject* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_404(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Transform2D, arg2, arg2_in);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_405(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

MonoObject* godot_icall_1_406(MethodBind* method, Object* ptr, RID* arg1) {
	Transform2D ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Transform2D, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Transform2D), ret_out);
}

void godot_icall_3_407(MethodBind* method, Object* ptr, RID* arg1, Object* arg2, MonoString* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { arg1, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_408(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	MARSHALLED_IN(Vector2, arg3, arg3_in);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_409(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_410(MethodBind* method, Object* ptr, RID* arg1, Object* arg2, MonoString* arg3, MonoObject* arg4) {
	ERR_FAIL_NULL(ptr);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	Variant arg4_in = GDMonoMarshal::mono_object_to_variant(arg4);
	const void* call_args[4] = { arg1, arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_5_411(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2, real_t* arg3, real_t arg4, Object* arg5) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	MARSHALLED_IN(Transform2D, arg2, arg2_in);
	MARSHALLED_IN(Vector2, arg3, arg3_in);
	double arg4_in = (double)arg4;
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, arg5 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

MonoObject* godot_icall_1_412(MethodBind* method, Object* ptr, RID* arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

RID* godot_icall_3_413(MethodBind* method, Object* ptr, real_t* arg1, RID* arg2, RID* arg3) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	const void* call_args[3] = { &arg1_in, arg2, arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

RID* godot_icall_5_414(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, real_t* arg3, RID* arg4, RID* arg5) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	MARSHALLED_IN(Vector2, arg3, arg3_in);
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, arg4, arg5 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

RID* godot_icall_4_415(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, RID* arg3, RID* arg4) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	const void* call_args[4] = { &arg1_in, &arg2_in, arg3, arg4 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

Object* godot_icall_Physics2DServer_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("Physics2DServer");
}

Object* godot_icall_Physics2DShapeQueryParameters_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Physics2DShapeQueryParameters");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Physics2DTestMotionResult_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Physics2DTestMotionResult");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_416(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector3, arg1, arg1_in);
	MARSHALLED_IN(Vector3, arg2, arg2_in);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_0_417(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_4_418(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, MonoArray* arg3, int arg4) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector3, arg1, arg1_in);
	MARSHALLED_IN(Vector3, arg2, arg2_in);
	Array arg3_in = GDMonoMarshal::mono_array_to_Array(arg3);
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Dictionary_to_mono_object(ret);
}

MonoArray* godot_icall_2_419(MethodBind* method, Object* ptr, Object* arg1, real_t* arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector3, arg2, arg2_in);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Array_to_mono_array(ret);
}

MonoObject* godot_icall_1_420(MethodBind* method, Object* ptr, RID* arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

void godot_icall_3_421(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Transform, arg3, arg3_in);
	const void* call_args[3] = { arg1, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_422(MethodBind* method, Object* ptr, RID* arg1, int arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	MARSHALLED_IN(Transform, arg3, arg3_in);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_423(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	Transform ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Transform, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Transform), ret_out);
}

void godot_icall_2_424(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Transform, arg2, arg2_in);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_425(MethodBind* method, Object* ptr, RID* arg1) {
	Transform ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Transform, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Transform), ret_out);
}

RID* godot_icall_2_426(MethodBind* method, Object* ptr, int arg1, bool arg2) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

void godot_icall_2_427(MethodBind* method, Object* ptr, RID* arg1, real_t arg2) {
	ERR_FAIL_NULL(ptr);
	double arg2_in = (double)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

real_t godot_icall_1_428(MethodBind* method, Object* ptr, RID* arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

void godot_icall_3_429(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector3, arg2, arg2_in);
	MARSHALLED_IN(Vector3, arg3, arg3_in);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_430(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector3, arg2, arg2_in);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_431(MethodBind* method, Object* ptr, RID* arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

RID* godot_icall_4_432(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2, RID* arg3, real_t* arg4) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector3, arg2, arg2_in);
	MARSHALLED_IN(Vector3, arg4, arg4_in);
	const void* call_args[4] = { arg1, &arg2_in, arg3, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

MonoObject* godot_icall_1_433(MethodBind* method, Object* ptr, RID* arg1) {
	Vector3 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector3, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector3), ret_out);
}

RID* godot_icall_4_434(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2, RID* arg3, real_t* arg4) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Transform, arg2, arg2_in);
	MARSHALLED_IN(Transform, arg4, arg4_in);
	const void* call_args[4] = { arg1, &arg2_in, arg3, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

bool godot_icall_2_435(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_4_436(MethodBind* method, Object* ptr, RID* arg1, int arg2, int arg3, real_t arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	double arg4_in = (double)arg4;
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

real_t godot_icall_3_437(MethodBind* method, Object* ptr, RID* arg1, int arg2, int arg3) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

void godot_icall_4_438(MethodBind* method, Object* ptr, RID* arg1, int arg2, int arg3, bool arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4 };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_3_439(MethodBind* method, Object* ptr, RID* arg1, int arg2, int arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

Object* godot_icall_PhysicsServer_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("PhysicsServer");
}

Object* godot_icall_PhysicsShapeQueryParameters_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PhysicsShapeQueryParameters");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PinJoint_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PinJoint");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PinJoint2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PinJoint2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PlaneMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PlaneMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PlaneShape_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PlaneShape");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PluginScript_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PluginScript");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Polygon2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Polygon2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_440(MethodBind* method, Object* ptr, MonoArray* arg1, MonoArray* arg2) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg1);
	PoolIntArray arg2_in = GDMonoMarshal::mono_array_to_PoolIntArray(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoArray* godot_icall_2_441(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2) {
	PoolVector2Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolVector2Array_to_mono_array(ret);
}

Object* godot_icall_PolygonPathFinder_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PolygonPathFinder");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Popup_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Popup");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PopupDialog_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PopupDialog");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_4_442(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, int arg3, int arg4) {
	ERR_FAIL_NULL(ptr);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_443(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, int arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_444(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, int arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_445(MethodBind* method, Object* ptr, Object* arg1, Object* arg2, int arg3, bool arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[4] = { arg1, arg2, &arg3_in, &arg4 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_446(MethodBind* method, Object* ptr, Object* arg1, int arg2, bool arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[3] = { arg1, &arg2_in, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_447(MethodBind* method, Object* ptr, int arg1, Object* arg2, bool arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[3] = { &arg1_in, arg2, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_448(MethodBind* method, Object* ptr, int arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_PopupMenu_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PopupMenu");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PopupPanel_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PopupPanel");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Position2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Position2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Position3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Position3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PrismMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PrismMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ProceduralSky_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ProceduralSky");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ProgressBar_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ProgressBar");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ProjectSettings_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("ProjectSettings");
}

Object* godot_icall_ProximityGroup_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ProximityGroup");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_QuadMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "QuadMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Range_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Range");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_RayCast_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RayCast");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_RayCast2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RayCast2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_RayShape_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RayShape");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_RayShape2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RayShape2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_RectangleShape2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RectangleShape2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Reference_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Reference");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ReferenceRect_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ReferenceRect");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ReflectionProbe_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ReflectionProbe");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_3_449(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, int arg3) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoArray* godot_icall_3_450(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, int arg3) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Array_to_mono_array(ret);
}

MonoString* godot_icall_5_451(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, bool arg3, int arg4, int arg5) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

Object* godot_icall_RegEx_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RegEx");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoString* godot_icall_1_452(MethodBind* method, Object* ptr, MonoObject* arg1) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

Object* godot_icall_RegExMatch_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RegExMatch");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_RemoteTransform_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RemoteTransform");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_RemoteTransform2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RemoteTransform2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_453(MethodBind* method, Object* ptr, bool arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_Resource_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Resource");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_454(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_1_455(MethodBind* method, Object* ptr, MonoString* arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_ResourcePreloader_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ResourcePreloader");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_456(MethodBind* method, Object* ptr, int arg1, bool arg2, int arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_RichTextLabel_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RichTextLabel");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_RigidBody_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RigidBody");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_457(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_3_458(MethodBind* method, Object* ptr, real_t* arg1, real_t arg2, Object* arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	double arg2_in = (double)arg2;
	const void* call_args[3] = { &arg1_in, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

Object* godot_icall_RigidBody2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RigidBody2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

NodePath* godot_icall_2_459(MethodBind* method, Object* ptr, int arg1, bool arg2) {
	NodePath ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(NodePath(ret));
}

MonoObject* godot_icall_1_460(MethodBind* method, Object* ptr, int arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoArray* godot_icall_1_461(MethodBind* method, Object* ptr, int arg1) {
	PoolStringArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolStringArray_to_mono_array(ret);
}

MonoObject* godot_icall_2_462(MethodBind* method, Object* ptr, real_t arg1, bool arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	double arg1_in = (double)arg1;
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_4_463(MethodBind* method, Object* ptr, int arg1, int arg2, real_t* arg3, real_t arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	MARSHALLED_IN(Vector2, arg3, arg3_in);
	double arg4_in = (double)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_4_464(MethodBind* method, Object* ptr, int arg1, MonoString* arg2, MonoString* arg3, MonoArray* arg4) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Vector<Variant> varargs;
	int vararg_length = mono_array_length(arg4);
	int total_length = 3 + vararg_length;
	ERR_FAIL_COND_V(varargs.resize(vararg_length) != OK, NULL);
	Vector<Variant*> call_args;
	ERR_FAIL_COND_V(call_args.resize(total_length) != OK, NULL);
	Variant arg1_in = (Variant)arg1;
	call_args.set(0, &arg1_in);
	Variant arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	call_args.set(0, &arg2_in);
	Variant arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	call_args.set(0, &arg3_in);
	for (int i = 0; i < vararg_length; i++) {
		MonoObject* elem = mono_array_get(arg4, MonoObject*, i);
		varargs.set(i, GDMonoMarshal::mono_object_to_variant(elem));
		call_args.set(3 + i, &varargs[i]);
	}
	Variant::CallError vcall_error;
	ret = method->call(ptr, (const Variant**)call_args.ptr(), total_length, vcall_error);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

void godot_icall_3_465(MethodBind* method, Object* ptr, int arg1, MonoString* arg2, int arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_466(MethodBind* method, Object* ptr, int arg1, MonoString* arg2, MonoString* arg3, MonoObject* arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	Variant arg4_in = GDMonoMarshal::mono_object_to_variant(arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_3_467(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, MonoArray* arg3) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Vector<Variant> varargs;
	int vararg_length = mono_array_length(arg3);
	int total_length = 2 + vararg_length;
	ERR_FAIL_COND_V(varargs.resize(vararg_length) != OK, NULL);
	Vector<Variant*> call_args;
	ERR_FAIL_COND_V(call_args.resize(total_length) != OK, NULL);
	Variant arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	call_args.set(0, &arg1_in);
	Variant arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	call_args.set(0, &arg2_in);
	for (int i = 0; i < vararg_length; i++) {
		MonoObject* elem = mono_array_get(arg3, MonoObject*, i);
		varargs.set(i, GDMonoMarshal::mono_object_to_variant(elem));
		call_args.set(2 + i, &varargs[i]);
	}
	Variant::CallError vcall_error;
	ret = method->call(ptr, (const Variant**)call_args.ptr(), total_length, vcall_error);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

Object* godot_icall_SceneTree_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SceneTree");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

#ifdef TOOLS_ENABLED
MonoObject* godot_icall_2_468(MethodBind* method, Object* ptr, real_t* arg1, Object* arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
bool godot_icall_3_469(MethodBind* method, Object* ptr, real_t* arg1, MonoObject* arg2, Object* arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	const void* call_args[3] = { &arg1_in, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_3_470(MethodBind* method, Object* ptr, real_t* arg1, MonoObject* arg2, Object* arg3) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	const void* call_args[3] = { &arg1_in, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_471(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

#endif // TOOLS_ENABLED
Object* godot_icall_ScrollBar_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ScrollBar");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ScrollContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ScrollContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SegmentShape2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SegmentShape2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_472(MethodBind* method, Object* ptr, MonoString* arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_Shader_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Shader");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_473(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_ShaderMaterial_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ShaderMaterial");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

bool godot_icall_3_474(MethodBind* method, Object* ptr, real_t* arg1, Object* arg2, real_t* arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	MARSHALLED_IN(Transform2D, arg1, arg1_in);
	MARSHALLED_IN(Transform2D, arg3, arg3_in);
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

bool godot_icall_5_475(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, Object* arg3, real_t* arg4, real_t* arg5) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	MARSHALLED_IN(Transform2D, arg1, arg1_in);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	MARSHALLED_IN(Transform2D, arg4, arg4_in);
	MARSHALLED_IN(Vector2, arg5, arg5_in);
	const void* call_args[5] = { &arg1_in, &arg2_in, arg3, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

MonoObject* godot_icall_3_476(MethodBind* method, Object* ptr, real_t* arg1, Object* arg2, real_t* arg3) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Transform2D, arg1, arg1_in);
	MARSHALLED_IN(Transform2D, arg3, arg3_in);
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

MonoObject* godot_icall_5_477(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, Object* arg3, real_t* arg4, real_t* arg5) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Transform2D, arg1, arg1_in);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	MARSHALLED_IN(Transform2D, arg4, arg4_in);
	MARSHALLED_IN(Vector2, arg5, arg5_in);
	const void* call_args[5] = { &arg1_in, &arg2_in, arg3, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

MonoObject* godot_icall_0_478(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_ShortCut_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ShortCut");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Skeleton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Skeleton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Slider_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Slider");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SliderJoint_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SliderJoint");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_479(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_0_480(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_481(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_2_482(MethodBind* method, Object* ptr, real_t* arg1, real_t arg2) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector3, arg1, arg1_in);
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_483(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector3, arg1, arg1_in);
	MARSHALLED_IN(Vector3, arg2, arg2_in);
	MARSHALLED_IN(Vector3, arg3, arg3_in);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_Spatial_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Spatial");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SpatialMaterial_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SpatialMaterial");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SpatialVelocityTracker_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SpatialVelocityTracker");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SphereMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SphereMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SphereShape_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SphereShape");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_484(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_SpinBox_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SpinBox");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SpotLight_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SpotLight");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Sprite_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Sprite");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Sprite3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Sprite3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_485(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2, int arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_486(MethodBind* method, Object* ptr, MonoString* arg1, int arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_3_487(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, Object* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[3] = { &arg1_in, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_SpriteFrames_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SpriteFrames");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_StaticBody_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StaticBody");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_StaticBody2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StaticBody2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoArray* godot_icall_1_488(MethodBind* method, Object* ptr, MonoArray* arg1) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	PoolByteArray arg1_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Array_to_mono_array(ret);
}

MonoObject* godot_icall_0_489(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_StreamPeerBuffer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StreamPeerBuffer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int godot_icall_3_490(MethodBind* method, Object* ptr, Object* arg1, bool arg2, MonoString* arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { arg1, &arg2, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

Object* godot_icall_StreamPeerSSL_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StreamPeerSSL");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_StreamPeerTCP_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StreamPeerTCP");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_StreamTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StreamTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

bool godot_icall_2_491(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	MARSHALLED_IN(Rect2, arg2, arg2_in);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_2_492(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Rect2, arg2, arg2_in);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_StyleBoxEmpty_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StyleBoxEmpty");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_4_493(MethodBind* method, Object* ptr, real_t arg1, real_t arg2, real_t arg3, real_t arg4) {
	ERR_FAIL_NULL(ptr);
	double arg1_in = (double)arg1;
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	double arg4_in = (double)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_StyleBoxFlat_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StyleBoxFlat");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_StyleBoxLine_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StyleBoxLine");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_StyleBoxTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StyleBoxTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_6_494(MethodBind* method, Object* ptr, MonoArray* arg1, MonoArray* arg2, MonoArray* arg3, MonoArray* arg4, MonoArray* arg5, MonoArray* arg6) {
	ERR_FAIL_NULL(ptr);
	PoolVector3Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector3Array(arg1);
	PoolVector2Array arg2_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg2);
	PoolColorArray arg3_in = GDMonoMarshal::mono_array_to_PoolColorArray(arg3);
	PoolVector2Array arg4_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg4);
	PoolVector3Array arg5_in = GDMonoMarshal::mono_array_to_PoolVector3Array(arg5);
	Array arg6_in = GDMonoMarshal::mono_array_to_Array(arg6);
	const void* call_args[6] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_495(MethodBind* method, Object* ptr, Object* arg1, int arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	MARSHALLED_IN(Transform, arg3, arg3_in);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_496(MethodBind* method, Object* ptr, Object* arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_SurfaceTool_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SurfaceTool");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int godot_icall_2_497(MethodBind* method, Object* ptr, int arg1, MonoString* arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

MonoObject* godot_icall_0_498(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_TCP_Server_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TCP_Server");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_499(MethodBind* method, Object* ptr, int arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_0_500(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_TabContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TabContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Tabs_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Tabs");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_501(MethodBind* method, Object* ptr, int arg1, bool arg2, bool arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[3] = { &arg1_in, &arg2, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

MonoArray* godot_icall_4_502(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, int arg3, int arg4) {
	PoolIntArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolIntArray_to_mono_array(ret);
}

void godot_icall_4_503(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, real_t* arg3, bool arg4) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	MARSHALLED_IN(Color, arg3, arg3_in);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4 };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_TextEdit_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TextEdit");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_5_504(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2, real_t* arg3, bool arg4, Object* arg5) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	MARSHALLED_IN(Color, arg3, arg3_in);
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4, arg5 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_6_505(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2, bool arg3, real_t* arg4, bool arg5, Object* arg6) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Rect2, arg2, arg2_in);
	MARSHALLED_IN(Color, arg4, arg4_in);
	const void* call_args[6] = { arg1, &arg2_in, &arg3, &arg4_in, &arg5, arg6 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_7_506(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2, real_t* arg3, real_t* arg4, bool arg5, Object* arg6, bool arg7) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Rect2, arg2, arg2_in);
	MARSHALLED_IN(Rect2, arg3, arg3_in);
	MARSHALLED_IN(Color, arg4, arg4_in);
	const void* call_args[7] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5, arg6, &arg7 };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_0_507(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_508(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_TextureButton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TextureButton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_TextureProgress_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TextureProgress");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_TextureRect_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TextureRect");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_509(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, Object* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[3] = { &arg1_in, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_510(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	MARSHALLED_IN(Color, arg3, arg3_in);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_0_511(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_Theme_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Theme");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_512(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_7_513(MethodBind* method, Object* ptr, int arg1, int arg2, int arg3, bool arg4, bool arg5, bool arg6, real_t* arg7) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	MARSHALLED_IN(Vector2, arg7, arg7_in);
	const void* call_args[7] = { &arg1_in, &arg2_in, &arg3_in, &arg4, &arg5, &arg6, &arg7_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_5_514(MethodBind* method, Object* ptr, real_t* arg1, int arg2, bool arg3, bool arg4, bool arg5) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3, &arg4, &arg5 };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_515(MethodBind* method, Object* ptr, real_t* arg1, bool arg2) {
	Vector2 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector2, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector2), ret_out);
}

Object* godot_icall_TileMap_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TileMap");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_516(MethodBind* method, Object* ptr, int arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_3_517(MethodBind* method, Object* ptr, int arg1, int arg2, Object* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[3] = { &arg1_in, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_518(MethodBind* method, Object* ptr, int arg1, int arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	MARSHALLED_IN(Transform2D, arg3, arg3_in);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_519(MethodBind* method, Object* ptr, int arg1, int arg2) {
	Transform2D ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Transform2D, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Transform2D), ret_out);
}

void godot_icall_5_520(MethodBind* method, Object* ptr, int arg1, Object* arg2, real_t* arg3, bool arg4, real_t* arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	MARSHALLED_IN(Transform2D, arg3, arg3_in);
	MARSHALLED_IN(Vector2, arg5, arg5_in);
	const void* call_args[5] = { &arg1_in, arg2, &arg3_in, &arg4, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_521(MethodBind* method, Object* ptr, int arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_1_522(MethodBind* method, Object* ptr, int arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_TileSet_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TileSet");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Timer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Timer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ToolButton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ToolButton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_TouchScreenButton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TouchScreenButton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Translation_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Translation");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_TranslationServer_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("TranslationServer");
}

MonoObject* godot_icall_1_523(MethodBind* method, Object* ptr, Object* arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_0_524(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_1_525(MethodBind* method, Object* ptr, Object* arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_2_526(MethodBind* method, Object* ptr, Object* arg1, int arg2) {
	Rect2 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Rect2, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Rect2), ret_out);
}

MonoObject* godot_icall_1_527(MethodBind* method, Object* ptr, real_t* arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_Tree_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Tree");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_5_528(MethodBind* method, Object* ptr, int arg1, real_t arg2, real_t arg3, real_t arg4, bool arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	double arg4_in = (double)arg4;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5 };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_529(MethodBind* method, Object* ptr, int arg1) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Dictionary_to_mono_object(ret);
}

void godot_icall_3_530(MethodBind* method, Object* ptr, int arg1, Object* arg2, MonoString* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_531(MethodBind* method, Object* ptr, int arg1, real_t* arg2, bool arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	MARSHALLED_IN(Color, arg2, arg2_in);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_5_532(MethodBind* method, Object* ptr, int arg1, Object* arg2, int arg3, bool arg4, MonoString* arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg3_in = (int64_t)arg3;
	String arg5_in = GDMonoMarshal::mono_string_to_godot(arg5);
	const void* call_args[5] = { &arg1_in, arg2, &arg3_in, &arg4, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_533(MethodBind* method, Object* ptr, int arg1, int arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_TriangleMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TriangleMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

bool godot_icall_2_534(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

bool godot_icall_8_535(MethodBind* method, Object* ptr, Object* arg1, NodePath* arg2, MonoObject* arg3, MonoObject* arg4, real_t arg5, int arg6, int arg7, real_t arg8) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	Variant arg4_in = GDMonoMarshal::mono_object_to_variant(arg4);
	double arg5_in = (double)arg5;
	int64_t arg6_in = (int64_t)arg6;
	int64_t arg7_in = (int64_t)arg7;
	double arg8_in = (double)arg8;
	const void* call_args[8] = { arg1, arg2, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in, &arg8_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

bool godot_icall_8_536(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, MonoObject* arg3, MonoObject* arg4, real_t arg5, int arg6, int arg7, real_t arg8) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	Variant arg4_in = GDMonoMarshal::mono_object_to_variant(arg4);
	double arg5_in = (double)arg5;
	int64_t arg6_in = (int64_t)arg6;
	int64_t arg7_in = (int64_t)arg7;
	double arg8_in = (double)arg8;
	const void* call_args[8] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in, &arg8_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

bool godot_icall_8_537(MethodBind* method, Object* ptr, Object* arg1, real_t arg2, MonoString* arg3, MonoObject* arg4, MonoObject* arg5, MonoObject* arg6, MonoObject* arg7, MonoObject* arg8) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	double arg2_in = (double)arg2;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	Variant arg4_in = GDMonoMarshal::mono_object_to_variant(arg4);
	Variant arg5_in = GDMonoMarshal::mono_object_to_variant(arg5);
	Variant arg6_in = GDMonoMarshal::mono_object_to_variant(arg6);
	Variant arg7_in = GDMonoMarshal::mono_object_to_variant(arg7);
	Variant arg8_in = GDMonoMarshal::mono_object_to_variant(arg8);
	const void* call_args[8] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in, &arg8_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

bool godot_icall_9_538(MethodBind* method, Object* ptr, Object* arg1, NodePath* arg2, MonoObject* arg3, Object* arg4, NodePath* arg5, real_t arg6, int arg7, int arg8, real_t arg9) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	double arg6_in = (double)arg6;
	int64_t arg7_in = (int64_t)arg7;
	int64_t arg8_in = (int64_t)arg8;
	double arg9_in = (double)arg9;
	const void* call_args[9] = { arg1, arg2, &arg3_in, arg4, arg5, &arg6_in, &arg7_in, &arg8_in, &arg9_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

bool godot_icall_9_539(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, MonoObject* arg3, Object* arg4, MonoString* arg5, real_t arg6, int arg7, int arg8, real_t arg9) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	String arg5_in = GDMonoMarshal::mono_string_to_godot(arg5);
	double arg6_in = (double)arg6;
	int64_t arg7_in = (int64_t)arg7;
	int64_t arg8_in = (int64_t)arg8;
	double arg9_in = (double)arg9;
	const void* call_args[9] = { arg1, &arg2_in, &arg3_in, arg4, &arg5_in, &arg6_in, &arg7_in, &arg8_in, &arg9_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

bool godot_icall_9_540(MethodBind* method, Object* ptr, Object* arg1, NodePath* arg2, Object* arg3, NodePath* arg4, MonoObject* arg5, real_t arg6, int arg7, int arg8, real_t arg9) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	Variant arg5_in = GDMonoMarshal::mono_object_to_variant(arg5);
	double arg6_in = (double)arg6;
	int64_t arg7_in = (int64_t)arg7;
	int64_t arg8_in = (int64_t)arg8;
	double arg9_in = (double)arg9;
	const void* call_args[9] = { arg1, arg2, arg3, arg4, &arg5_in, &arg6_in, &arg7_in, &arg8_in, &arg9_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

bool godot_icall_9_541(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, Object* arg3, MonoString* arg4, MonoObject* arg5, real_t arg6, int arg7, int arg8, real_t arg9) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	String arg4_in = GDMonoMarshal::mono_string_to_godot(arg4);
	Variant arg5_in = GDMonoMarshal::mono_object_to_variant(arg5);
	double arg6_in = (double)arg6;
	int64_t arg7_in = (int64_t)arg7;
	int64_t arg8_in = (int64_t)arg8;
	double arg9_in = (double)arg9;
	const void* call_args[9] = { arg1, &arg2_in, arg3, &arg4_in, &arg5_in, &arg6_in, &arg7_in, &arg8_in, &arg9_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

Object* godot_icall_Tween_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Tween");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_3_542(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, MonoArray* arg3) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Vector<Variant> varargs;
	int vararg_length = mono_array_length(arg3);
	int total_length = 2 + vararg_length;
	ERR_FAIL_COND_V(varargs.resize(vararg_length) != OK, NULL);
	Vector<Variant*> call_args;
	ERR_FAIL_COND_V(call_args.resize(total_length) != OK, NULL);
	Variant arg1_in = arg1;
	call_args.set(0, &arg1_in);
	Variant arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	call_args.set(0, &arg2_in);
	for (int i = 0; i < vararg_length; i++) {
		MonoObject* elem = mono_array_get(arg3, MonoObject*, i);
		varargs.set(i, GDMonoMarshal::mono_object_to_variant(elem));
		call_args.set(2 + i, &varargs[i]);
	}
	Variant::CallError vcall_error;
	ret = method->call(ptr, (const Variant**)call_args.ptr(), total_length, vcall_error);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

void godot_icall_3_543(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, MonoObject* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_UndoRedo_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "UndoRedo");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VBoxContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VBoxContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VScrollBar_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VScrollBar");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VSeparator_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VSeparator");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VSlider_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VSlider");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VSplitContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VSplitContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VehicleBody_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VehicleBody");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VehicleWheel_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VehicleWheel");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_544(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_VideoPlayer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VideoPlayer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VideoStreamTheora_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VideoStreamTheora");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VideoStreamWebm_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VideoStreamWebm");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_545(MethodBind* method, Object* ptr, bool arg1, real_t* arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	MARSHALLED_IN(Vector2, arg3, arg3_in);
	const void* call_args[3] = { &arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_0_546(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_547(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_Viewport_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Viewport");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ViewportContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ViewportContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ViewportTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ViewportTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisibilityEnabler_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisibilityEnabler");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisibilityEnabler2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisibilityEnabler2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisibilityNotifier_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisibilityNotifier");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisibilityNotifier2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisibilityNotifier2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_4_548(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, Object* arg3, real_t* arg4) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	MARSHALLED_IN(Vector2, arg4, arg4_in);
	const void* call_args[4] = { &arg1_in, &arg2_in, arg3, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_549(MethodBind* method, Object* ptr, MonoString* arg1, int arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_3_550(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	MARSHALLED_IN(Vector2, arg3, arg3_in);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_551(MethodBind* method, Object* ptr, MonoString* arg1, int arg2) {
	Vector2 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector2, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector2), ret_out);
}

void godot_icall_4_552(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, int arg3, int arg4) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_4_553(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, int arg3, int arg4) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_5_554(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, int arg3, int arg4, int arg5) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_5_555(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, int arg3, int arg4, int arg5) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_3_556(MethodBind* method, Object* ptr, MonoString* arg1, MonoObject* arg2, bool arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_557(MethodBind* method, Object* ptr, MonoString* arg1, MonoObject* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	Dictionary arg2_in = GDMonoMarshal::mono_object_to_Dictionary(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_558(MethodBind* method, Object* ptr, MonoString* arg1) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Dictionary_to_mono_object(ret);
}

void godot_icall_3_559(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, MonoString* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_VisualScript_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScript");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptBasicTypeConstant_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptBasicTypeConstant");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptBuiltinFunc_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptBuiltinFunc");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptClassConstant_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptClassConstant");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptComment_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptComment");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptCondition_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptCondition");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptConstant_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptConstant");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptConstructor_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptConstructor");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptCustomNode_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptCustomNode");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptDeconstruct_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptDeconstruct");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptEmitSignal_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptEmitSignal");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptEngineSingleton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptEngineSingleton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptExpression_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptExpression");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptFunction_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptFunction");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptFunctionCall_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptFunctionCall");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_560(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, MonoArray* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Array arg3_in = GDMonoMarshal::mono_array_to_Array(arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_561(MethodBind* method, Object* ptr, MonoArray* arg1) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Array arg1_in = GDMonoMarshal::mono_array_to_Array(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

Object* godot_icall_VisualScriptGlobalConstant_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptGlobalConstant");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptIndexGet_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptIndexGet");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptIndexSet_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptIndexSet");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptInputAction_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptInputAction");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptIterator_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptIterator");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptLocalVar_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptLocalVar");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptLocalVarSet_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptLocalVarSet");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptMathConstant_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptMathConstant");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_562(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_VisualScriptOperator_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptOperator");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptPreload_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptPreload");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptPropertyGet_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptPropertyGet");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptPropertySet_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptPropertySet");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptResourcePath_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptResourcePath");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptReturn_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptReturn");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptSceneNode_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptSceneNode");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptSceneTree_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptSceneTree");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptSelect_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptSelect");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptSelf_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptSelf");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptSequence_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptSequence");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptSubCall_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptSubCall");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptSwitch_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptSwitch");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptTypeCast_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptTypeCast");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptVariableGet_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptVariableGet");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptVariableSet_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptVariableSet");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptWhile_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptWhile");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptYield_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptYield");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptYieldSignal_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptYieldSignal");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

RID* godot_icall_2_563(MethodBind* method, Object* ptr, Object* arg1, int arg2) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

void godot_icall_5_564(MethodBind* method, Object* ptr, RID* arg1, int arg2, int arg3, int arg4, int arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_565(MethodBind* method, Object* ptr, RID* arg1, Object* arg2, int arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_566(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_3_567(MethodBind* method, Object* ptr, RID* arg1, int arg2, int arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_568(MethodBind* method, Object* ptr, RID* arg1, MonoString* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoString* godot_icall_1_569(MethodBind* method, Object* ptr, RID* arg1) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

void godot_icall_3_570(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, int arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoArray* godot_icall_1_571(MethodBind* method, Object* ptr, RID* arg1) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Array_to_mono_array(ret);
}

void godot_icall_3_572(MethodBind* method, Object* ptr, RID* arg1, MonoString* arg2, RID* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[3] = { arg1, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

RID* godot_icall_2_573(MethodBind* method, Object* ptr, RID* arg1, MonoString* arg2) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

void godot_icall_3_574(MethodBind* method, Object* ptr, RID* arg1, MonoString* arg2, MonoObject* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_575(MethodBind* method, Object* ptr, RID* arg1, MonoString* arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

void godot_icall_5_576(MethodBind* method, Object* ptr, RID* arg1, int arg2, MonoArray* arg3, MonoArray* arg4, int arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	Array arg3_in = GDMonoMarshal::mono_array_to_Array(arg3);
	Array arg4_in = GDMonoMarshal::mono_array_to_Array(arg4);
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_2_577(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

MonoArray* godot_icall_2_578(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	PoolByteArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolByteArray_to_mono_array(ret);
}

MonoArray* godot_icall_2_579(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Array_to_mono_array(ret);
}

MonoObject* godot_icall_2_580(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	AABB ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(AABB, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(AABB), ret_out);
}

void godot_icall_2_581(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(AABB, arg2, arg2_in);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_582(MethodBind* method, Object* ptr, RID* arg1) {
	AABB ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(AABB, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(AABB), ret_out);
}

void godot_icall_3_583(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2, int arg3) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Rect2, arg2, arg2_in);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_584(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg3, arg3_in);
	const void* call_args[3] = { arg1, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_585(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Color, arg2, arg2_in);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_586(MethodBind* method, Object* ptr, RID* arg1, bool arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Rect2, arg3, arg3_in);
	const void* call_args[3] = { arg1, &arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_6_587(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2, real_t* arg3, real_t* arg4, real_t arg5, bool arg6) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	MARSHALLED_IN(Vector2, arg3, arg3_in);
	MARSHALLED_IN(Color, arg4, arg4_in);
	double arg5_in = (double)arg5;
	const void* call_args[6] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_5_588(MethodBind* method, Object* ptr, RID* arg1, MonoArray* arg2, MonoArray* arg3, real_t arg4, bool arg5) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg2_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg2);
	PoolColorArray arg3_in = GDMonoMarshal::mono_array_to_PoolColorArray(arg3);
	double arg4_in = (double)arg4;
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_589(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Rect2, arg2, arg2_in);
	MARSHALLED_IN(Color, arg3, arg3_in);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_590(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2, real_t arg3, real_t* arg4) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	double arg3_in = (double)arg3;
	MARSHALLED_IN(Color, arg4, arg4_in);
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_7_591(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2, RID* arg3, bool arg4, real_t* arg5, bool arg6, RID* arg7) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Rect2, arg2, arg2_in);
	MARSHALLED_IN(Color, arg5, arg5_in);
	const void* call_args[7] = { arg1, &arg2_in, arg3, &arg4, &arg5_in, &arg6, arg7 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_8_592(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2, RID* arg3, real_t* arg4, real_t* arg5, bool arg6, RID* arg7, bool arg8) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Rect2, arg2, arg2_in);
	MARSHALLED_IN(Rect2, arg4, arg4_in);
	MARSHALLED_IN(Color, arg5, arg5_in);
	const void* call_args[8] = { arg1, &arg2_in, arg3, &arg4_in, &arg5_in, &arg6, arg7, &arg8 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_11_593(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2, real_t* arg3, RID* arg4, real_t* arg5, real_t* arg6, int arg7, int arg8, bool arg9, real_t* arg10, RID* arg11) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Rect2, arg2, arg2_in);
	MARSHALLED_IN(Rect2, arg3, arg3_in);
	MARSHALLED_IN(Vector2, arg5, arg5_in);
	MARSHALLED_IN(Vector2, arg6, arg6_in);
	int64_t arg7_in = (int64_t)arg7;
	int64_t arg8_in = (int64_t)arg8;
	MARSHALLED_IN(Color, arg10, arg10_in);
	const void* call_args[11] = { arg1, &arg2_in, &arg3_in, arg4, &arg5_in, &arg6_in, &arg7_in, &arg8_in, &arg9, &arg10_in, arg11 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_7_594(MethodBind* method, Object* ptr, RID* arg1, MonoArray* arg2, MonoArray* arg3, MonoArray* arg4, RID* arg5, real_t arg6, RID* arg7) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg2_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg2);
	PoolColorArray arg3_in = GDMonoMarshal::mono_array_to_PoolColorArray(arg3);
	PoolVector2Array arg4_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg4);
	double arg6_in = (double)arg6;
	const void* call_args[7] = { arg1, &arg2_in, &arg3_in, &arg4_in, arg5, &arg6_in, arg7 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_7_595(MethodBind* method, Object* ptr, RID* arg1, MonoArray* arg2, MonoArray* arg3, MonoArray* arg4, RID* arg5, RID* arg6, bool arg7) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg2_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg2);
	PoolColorArray arg3_in = GDMonoMarshal::mono_array_to_PoolColorArray(arg3);
	PoolVector2Array arg4_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg4);
	const void* call_args[7] = { arg1, &arg2_in, &arg3_in, &arg4_in, arg5, arg6, &arg7 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_8_596(MethodBind* method, Object* ptr, RID* arg1, MonoArray* arg2, MonoArray* arg3, MonoArray* arg4, MonoArray* arg5, RID* arg6, int arg7, RID* arg8) {
	ERR_FAIL_NULL(ptr);
	PoolIntArray arg2_in = GDMonoMarshal::mono_array_to_PoolIntArray(arg2);
	PoolVector2Array arg3_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg3);
	PoolColorArray arg4_in = GDMonoMarshal::mono_array_to_PoolColorArray(arg4);
	PoolVector2Array arg5_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg5);
	int64_t arg7_in = (int64_t)arg7;
	const void* call_args[8] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, arg6, &arg7_in, arg8 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_597(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, RID* arg3) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[3] = { arg1, arg2, arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_6_598(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, RID* arg3, RID* arg4, int arg5, int arg6) {
	ERR_FAIL_NULL(ptr);
	int64_t arg5_in = (int64_t)arg5;
	int64_t arg6_in = (int64_t)arg6;
	const void* call_args[6] = { arg1, arg2, arg3, arg4, &arg5_in, &arg6_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_599(MethodBind* method, Object* ptr, RID* arg1, MonoArray* arg2, bool arg3) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg2_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg2);
	const void* call_args[3] = { arg1, &arg2_in, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_600(MethodBind* method, Object* ptr, RID* arg1, MonoArray* arg2) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg2_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_601(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, RID* arg3, RID* arg4) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[4] = { arg1, arg2, arg3, arg4 };
	method->ptrcall(ptr, call_args, NULL);
}

RID* godot_icall_3_602(MethodBind* method, Object* ptr, int arg1, int arg2, real_t arg3) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

void godot_icall_3_603(MethodBind* method, Object* ptr, Object* arg1, real_t* arg2, bool arg3) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Color, arg2, arg2_in);
	const void* call_args[3] = { arg1, &arg2_in, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_VisualServer_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("VisualServer");
}

Object* godot_icall_WeakRef_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "WeakRef");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_604(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_WindowDialog_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "WindowDialog");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_World_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "World");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_World2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "World2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_WorldEnvironment_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "WorldEnvironment");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_XMLParser_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "XMLParser");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_YSort_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "YSort");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_2_605(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Dictionary_to_mono_object(ret);
}

MonoArray* godot_icall_2_606(MethodBind* method, Object* ptr, MonoString* arg1, bool arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Array_to_mono_array(ret);
}

MonoObject* godot_icall_2_607(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

int godot_icall_3_608(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, MonoObject* arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

bool godot_icall_3_609(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, bool arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

MonoArray* godot_icall_2_610(MethodBind* method, Object* ptr, MonoString* arg1, bool arg2) {
	PoolStringArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolStringArray_to_mono_array(ret);
}

Object* godot_icall__ClassDB_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("ClassDB");
}

int godot_icall_2_611(MethodBind* method, Object* ptr, bool arg1, bool arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	const void* call_args[2] = { &arg1, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

Object* godot_icall_Directory_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "_Directory");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_612(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_1_613(MethodBind* method, Object* ptr, MonoString* arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall__Engine_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("Engine");
}

int godot_icall_3_614(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, MonoArray* arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	PoolByteArray arg3_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

int godot_icall_3_615(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, MonoString* arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

int godot_icall_3_616(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, int arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

MonoArray* godot_icall_1_617(MethodBind* method, Object* ptr, int arg1) {
	PoolByteArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolByteArray_to_mono_array(ret);
}

Object* godot_icall_File_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "_File");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoArray* godot_icall_1_618(MethodBind* method, Object* ptr, real_t* arg1) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector3, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Array_to_mono_array(ret);
}

MonoArray* godot_icall_4_619(MethodBind* method, Object* ptr, real_t arg1, real_t arg2, int arg3, int arg4) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	double arg1_in = (double)arg1;
	double arg2_in = (double)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Array_to_mono_array(ret);
}

MonoArray* godot_icall_5_620(MethodBind* method, Object* ptr, real_t arg1, real_t arg2, int arg3, int arg4, int arg5) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	double arg1_in = (double)arg1;
	double arg2_in = (double)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Array_to_mono_array(ret);
}

real_t godot_icall_4_621(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, real_t* arg3, real_t arg4) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	MARSHALLED_IN(Vector2, arg3, arg3_in);
	double arg4_in = (double)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

MonoObject* godot_icall_4_622(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, real_t* arg3, real_t* arg4) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	MARSHALLED_IN(Vector2, arg3, arg3_in);
	MARSHALLED_IN(Vector2, arg4, arg4_in);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

MonoArray* godot_icall_4_623(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, real_t* arg3, real_t* arg4) {
	PoolVector2Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	MARSHALLED_IN(Vector2, arg3, arg3_in);
	MARSHALLED_IN(Vector2, arg4, arg4_in);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolVector2Array_to_mono_array(ret);
}

MonoArray* godot_icall_4_624(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, real_t* arg3, real_t* arg4) {
	PoolVector3Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector3, arg1, arg1_in);
	MARSHALLED_IN(Vector3, arg2, arg2_in);
	MARSHALLED_IN(Vector3, arg3, arg3_in);
	MARSHALLED_IN(Vector3, arg4, arg4_in);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolVector3Array_to_mono_array(ret);
}

MonoObject* godot_icall_3_625(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, real_t* arg3) {
	Vector2 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	MARSHALLED_IN(Vector2, arg3, arg3_in);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector2, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector2), ret_out);
}

MonoObject* godot_icall_3_626(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, real_t* arg3) {
	Vector3 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector3, arg1, arg1_in);
	MARSHALLED_IN(Vector3, arg2, arg2_in);
	MARSHALLED_IN(Vector3, arg3, arg3_in);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector3, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector3), ret_out);
}

MonoObject* godot_icall_5_627(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, real_t* arg3, real_t* arg4, real_t* arg5) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector3, arg1, arg1_in);
	MARSHALLED_IN(Vector3, arg2, arg2_in);
	MARSHALLED_IN(Vector3, arg3, arg3_in);
	MARSHALLED_IN(Vector3, arg4, arg4_in);
	MARSHALLED_IN(Vector3, arg5, arg5_in);
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

MonoArray* godot_icall_4_628(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, real_t* arg3, real_t arg4) {
	PoolVector3Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector3, arg1, arg1_in);
	MARSHALLED_IN(Vector3, arg2, arg2_in);
	MARSHALLED_IN(Vector3, arg3, arg3_in);
	double arg4_in = (double)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolVector3Array_to_mono_array(ret);
}

MonoArray* godot_icall_4_629(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, real_t arg3, real_t arg4) {
	PoolVector3Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector3, arg1, arg1_in);
	MARSHALLED_IN(Vector3, arg2, arg2_in);
	double arg3_in = (double)arg3;
	double arg4_in = (double)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolVector3Array_to_mono_array(ret);
}

MonoArray* godot_icall_3_630(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, MonoArray* arg3) {
	PoolVector3Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector3, arg1, arg1_in);
	MARSHALLED_IN(Vector3, arg2, arg2_in);
	Array arg3_in = GDMonoMarshal::mono_array_to_Array(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolVector3Array_to_mono_array(ret);
}

bool godot_icall_4_631(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, real_t* arg3, real_t* arg4) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	MARSHALLED_IN(Vector2, arg3, arg3_in);
	MARSHALLED_IN(Vector2, arg4, arg4_in);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

MonoArray* godot_icall_1_632(MethodBind* method, Object* ptr, MonoArray* arg1) {
	PoolIntArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	PoolVector2Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolIntArray_to_mono_array(ret);
}

MonoArray* godot_icall_1_633(MethodBind* method, Object* ptr, MonoArray* arg1) {
	PoolVector2Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	PoolVector2Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolVector2Array_to_mono_array(ret);
}

MonoArray* godot_icall_2_634(MethodBind* method, Object* ptr, MonoArray* arg1, real_t* arg2) {
	PoolVector3Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	PoolVector3Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector3Array(arg1);
	MARSHALLED_IN(Plane, arg2, arg2_in);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolVector3Array_to_mono_array(ret);
}

MonoObject* godot_icall_1_635(MethodBind* method, Object* ptr, MonoArray* arg1) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	PoolVector2Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Dictionary_to_mono_object(ret);
}

Object* godot_icall__Geometry_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("Geometry");
}

Object* godot_icall__GodotSharp_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("GodotSharp");
}

MonoObject* godot_icall_1_636(MethodBind* method, Object* ptr, MonoString* arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall__JSON_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("JSON");
}

MonoString* godot_icall_1_637(MethodBind* method, Object* ptr, MonoArray* arg1) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	PoolByteArray arg1_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

MonoArray* godot_icall_1_638(MethodBind* method, Object* ptr, MonoString* arg1) {
	PoolByteArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolByteArray_to_mono_array(ret);
}

Object* godot_icall__Marshalls_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("Marshalls");
}

Object* godot_icall_Mutex_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "_Mutex");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int godot_icall_4_639(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2, bool arg3, MonoArray* arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	PoolStringArray arg2_in = GDMonoMarshal::mono_array_to_PoolStringArray(arg2);
	Array arg4_in = GDMonoMarshal::mono_array_to_Array(arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

int godot_icall_1_640(MethodBind* method, Object* ptr, MonoObject* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	Dictionary arg1_in = GDMonoMarshal::mono_object_to_Dictionary(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

int godot_icall_4_641(MethodBind* method, Object* ptr, MonoString* arg1, real_t arg2, MonoString* arg3, MonoString* arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	double arg2_in = (double)arg2;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	String arg4_in = GDMonoMarshal::mono_string_to_godot(arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

Object* godot_icall__OS_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("OS");
}

MonoObject* godot_icall_2_642(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_3_643(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, bool arg3) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall__ResourceLoader_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("ResourceLoader");
}

int godot_icall_3_644(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2, int arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

MonoArray* godot_icall_1_645(MethodBind* method, Object* ptr, Object* arg1) {
	PoolStringArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolStringArray_to_mono_array(ret);
}

Object* godot_icall__ResourceSaver_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("ResourceSaver");
}

Object* godot_icall_Semaphore_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "_Semaphore");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int godot_icall_4_646(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, MonoObject* arg3, int arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

Object* godot_icall_Thread_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "_Thread");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall__VisualScriptEditor_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("VisualScriptEditor");
}

namespace GodotSharpBindings
{
uint64_t get_core_api_hash() { return 5754650402509209747; }
#ifdef TOOLS_ENABLED
uint64_t get_editor_api_hash() { return 5011554599656059051; }
#endif // TOOLS_ENABLED
void register_generated_icalls() {
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ClassDB_get_method", (void*)godot_icall_ClassDB_get_method);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Object_Dtor", (void*)godot_icall_Object_Dtor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Object_connect_signal_awaiter", (void*)godot_icall_Object_connect_signal_awaiter);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_NodePath_Ctor", (void*)godot_icall_NodePath_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_NodePath_Dtor", (void*)godot_icall_NodePath_Dtor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_NodePath_operator_String", (void*)godot_icall_NodePath_operator_String);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_RID_Ctor", (void*)godot_icall_RID_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_RID_Dtor", (void*)godot_icall_RID_Dtor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_String_md5_buffer", (void*)godot_icall_String_md5_buffer);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_String_md5_text", (void*)godot_icall_String_md5_text);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_String_rfind", (void*)godot_icall_String_rfind);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_String_rfindn", (void*)godot_icall_String_rfindn);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_String_sha256_buffer", (void*)godot_icall_String_sha256_buffer);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_String_sha256_text", (void*)godot_icall_String_sha256_text);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Godot_bytes2var", (void*)godot_icall_Godot_bytes2var);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Godot_convert", (void*)godot_icall_Godot_convert);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Godot_hash", (void*)godot_icall_Godot_hash);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Godot_instance_from_id", (void*)godot_icall_Godot_instance_from_id);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Godot_print", (void*)godot_icall_Godot_print);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Godot_printerr", (void*)godot_icall_Godot_printerr);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Godot_printraw", (void*)godot_icall_Godot_printraw);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Godot_prints", (void*)godot_icall_Godot_prints);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Godot_printt", (void*)godot_icall_Godot_printt);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Godot_seed", (void*)godot_icall_Godot_seed);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Godot_str", (void*)godot_icall_Godot_str);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Godot_str2var", (void*)godot_icall_Godot_str2var);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Godot_type_exists", (void*)godot_icall_Godot_type_exists);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Godot_var2bytes", (void*)godot_icall_Godot_var2bytes);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Godot_var2str", (void*)godot_icall_Godot_var2str);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Godot_weakref", (void*)godot_icall_Godot_weakref);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ARVRAnchor_Ctor", (void*)godot_icall_ARVRAnchor_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ARVRCamera_Ctor", (void*)godot_icall_ARVRCamera_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ARVRController_Ctor", (void*)godot_icall_ARVRController_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ARVRInterfaceGDNative_Ctor", (void*)godot_icall_ARVRInterfaceGDNative_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ARVROrigin_Ctor", (void*)godot_icall_ARVROrigin_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ARVRPositionalTracker_Ctor", (void*)godot_icall_ARVRPositionalTracker_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ARVRServer_get_singleton", (void*)godot_icall_ARVRServer_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AStar_Ctor", (void*)godot_icall_AStar_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AcceptDialog_Ctor", (void*)godot_icall_AcceptDialog_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AnimatedSprite_Ctor", (void*)godot_icall_AnimatedSprite_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AnimatedSprite3D_Ctor", (void*)godot_icall_AnimatedSprite3D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Animation_Ctor", (void*)godot_icall_Animation_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AnimationPlayer_Ctor", (void*)godot_icall_AnimationPlayer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AnimationTreePlayer_Ctor", (void*)godot_icall_AnimationTreePlayer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Area_Ctor", (void*)godot_icall_Area_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Area2D_Ctor", (void*)godot_icall_Area2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ArrayMesh_Ctor", (void*)godot_icall_ArrayMesh_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AtlasTexture_Ctor", (void*)godot_icall_AtlasTexture_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioBusLayout_Ctor", (void*)godot_icall_AudioBusLayout_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectAmplify_Ctor", (void*)godot_icall_AudioEffectAmplify_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectBandLimitFilter_Ctor", (void*)godot_icall_AudioEffectBandLimitFilter_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectBandPassFilter_Ctor", (void*)godot_icall_AudioEffectBandPassFilter_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectChorus_Ctor", (void*)godot_icall_AudioEffectChorus_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectCompressor_Ctor", (void*)godot_icall_AudioEffectCompressor_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectDelay_Ctor", (void*)godot_icall_AudioEffectDelay_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectDistortion_Ctor", (void*)godot_icall_AudioEffectDistortion_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectEQ_Ctor", (void*)godot_icall_AudioEffectEQ_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectEQ10_Ctor", (void*)godot_icall_AudioEffectEQ10_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectEQ21_Ctor", (void*)godot_icall_AudioEffectEQ21_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectEQ6_Ctor", (void*)godot_icall_AudioEffectEQ6_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectFilter_Ctor", (void*)godot_icall_AudioEffectFilter_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectHighPassFilter_Ctor", (void*)godot_icall_AudioEffectHighPassFilter_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectHighShelfFilter_Ctor", (void*)godot_icall_AudioEffectHighShelfFilter_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectLimiter_Ctor", (void*)godot_icall_AudioEffectLimiter_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectLowPassFilter_Ctor", (void*)godot_icall_AudioEffectLowPassFilter_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectLowShelfFilter_Ctor", (void*)godot_icall_AudioEffectLowShelfFilter_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectNotchFilter_Ctor", (void*)godot_icall_AudioEffectNotchFilter_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectPanner_Ctor", (void*)godot_icall_AudioEffectPanner_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectPhaser_Ctor", (void*)godot_icall_AudioEffectPhaser_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectPitchShift_Ctor", (void*)godot_icall_AudioEffectPitchShift_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectReverb_Ctor", (void*)godot_icall_AudioEffectReverb_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectStereoEnhance_Ctor", (void*)godot_icall_AudioEffectStereoEnhance_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioServer_get_singleton", (void*)godot_icall_AudioServer_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioStreamOGGVorbis_Ctor", (void*)godot_icall_AudioStreamOGGVorbis_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioStreamPlayer_Ctor", (void*)godot_icall_AudioStreamPlayer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioStreamPlayer2D_Ctor", (void*)godot_icall_AudioStreamPlayer2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioStreamPlayer3D_Ctor", (void*)godot_icall_AudioStreamPlayer3D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioStreamRandomPitch_Ctor", (void*)godot_icall_AudioStreamRandomPitch_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioStreamSample_Ctor", (void*)godot_icall_AudioStreamSample_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_BackBufferCopy_Ctor", (void*)godot_icall_BackBufferCopy_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_BitMap_Ctor", (void*)godot_icall_BitMap_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_BitmapFont_Ctor", (void*)godot_icall_BitmapFont_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_BoneAttachment_Ctor", (void*)godot_icall_BoneAttachment_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_BoxShape_Ctor", (void*)godot_icall_BoxShape_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Button_Ctor", (void*)godot_icall_Button_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ButtonGroup_Ctor", (void*)godot_icall_ButtonGroup_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CSharpScript_Ctor", (void*)godot_icall_CSharpScript_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Camera_Ctor", (void*)godot_icall_Camera_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Camera2D_Ctor", (void*)godot_icall_Camera2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CanvasItemMaterial_Ctor", (void*)godot_icall_CanvasItemMaterial_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CanvasLayer_Ctor", (void*)godot_icall_CanvasLayer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CanvasModulate_Ctor", (void*)godot_icall_CanvasModulate_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CapsuleMesh_Ctor", (void*)godot_icall_CapsuleMesh_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CapsuleShape_Ctor", (void*)godot_icall_CapsuleShape_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CapsuleShape2D_Ctor", (void*)godot_icall_CapsuleShape2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CenterContainer_Ctor", (void*)godot_icall_CenterContainer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CheckBox_Ctor", (void*)godot_icall_CheckBox_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CheckButton_Ctor", (void*)godot_icall_CheckButton_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CircleShape2D_Ctor", (void*)godot_icall_CircleShape2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CollisionPolygon_Ctor", (void*)godot_icall_CollisionPolygon_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CollisionPolygon2D_Ctor", (void*)godot_icall_CollisionPolygon2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CollisionShape_Ctor", (void*)godot_icall_CollisionShape_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CollisionShape2D_Ctor", (void*)godot_icall_CollisionShape2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ColorPicker_Ctor", (void*)godot_icall_ColorPicker_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ColorPickerButton_Ctor", (void*)godot_icall_ColorPickerButton_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ColorRect_Ctor", (void*)godot_icall_ColorRect_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ConcavePolygonShape_Ctor", (void*)godot_icall_ConcavePolygonShape_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ConcavePolygonShape2D_Ctor", (void*)godot_icall_ConcavePolygonShape2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ConeTwistJoint_Ctor", (void*)godot_icall_ConeTwistJoint_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ConfigFile_Ctor", (void*)godot_icall_ConfigFile_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ConfirmationDialog_Ctor", (void*)godot_icall_ConfirmationDialog_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Container_Ctor", (void*)godot_icall_Container_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Control_Ctor", (void*)godot_icall_Control_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ConvexPolygonShape_Ctor", (void*)godot_icall_ConvexPolygonShape_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ConvexPolygonShape2D_Ctor", (void*)godot_icall_ConvexPolygonShape2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CubeMap_Ctor", (void*)godot_icall_CubeMap_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CubeMesh_Ctor", (void*)godot_icall_CubeMesh_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Curve_Ctor", (void*)godot_icall_Curve_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Curve2D_Ctor", (void*)godot_icall_Curve2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Curve3D_Ctor", (void*)godot_icall_Curve3D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CurveTexture_Ctor", (void*)godot_icall_CurveTexture_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CylinderMesh_Ctor", (void*)godot_icall_CylinderMesh_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_DampedSpringJoint2D_Ctor", (void*)godot_icall_DampedSpringJoint2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_DirectionalLight_Ctor", (void*)godot_icall_DirectionalLight_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_DynamicFont_Ctor", (void*)godot_icall_DynamicFont_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_DynamicFontData_Ctor", (void*)godot_icall_DynamicFontData_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_EncodedObjectAsID_Ctor", (void*)godot_icall_EncodedObjectAsID_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Environment_Ctor", (void*)godot_icall_Environment_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_FileDialog_Ctor", (void*)godot_icall_FileDialog_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_FuncRef_Ctor", (void*)godot_icall_FuncRef_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_GDNative_Ctor", (void*)godot_icall_GDNative_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_GDNativeLibrary_Ctor", (void*)godot_icall_GDNativeLibrary_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_GDScript_Ctor", (void*)godot_icall_GDScript_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_GIProbe_Ctor", (void*)godot_icall_GIProbe_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_GIProbeData_Ctor", (void*)godot_icall_GIProbeData_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Generic6DOFJoint_Ctor", (void*)godot_icall_Generic6DOFJoint_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Gradient_Ctor", (void*)godot_icall_Gradient_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_GradientTexture_Ctor", (void*)godot_icall_GradientTexture_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_GraphEdit_Ctor", (void*)godot_icall_GraphEdit_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_GraphNode_Ctor", (void*)godot_icall_GraphNode_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_GridContainer_Ctor", (void*)godot_icall_GridContainer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_GridMap_Ctor", (void*)godot_icall_GridMap_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_GrooveJoint2D_Ctor", (void*)godot_icall_GrooveJoint2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_HBoxContainer_Ctor", (void*)godot_icall_HBoxContainer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_HScrollBar_Ctor", (void*)godot_icall_HScrollBar_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_HSeparator_Ctor", (void*)godot_icall_HSeparator_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_HSlider_Ctor", (void*)godot_icall_HSlider_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_HSplitContainer_Ctor", (void*)godot_icall_HSplitContainer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_HTTPClient_Ctor", (void*)godot_icall_HTTPClient_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_HTTPRequest_Ctor", (void*)godot_icall_HTTPRequest_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_HingeJoint_Ctor", (void*)godot_icall_HingeJoint_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_IP_get_singleton", (void*)godot_icall_IP_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Image_Ctor", (void*)godot_icall_Image_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ImageTexture_Ctor", (void*)godot_icall_ImageTexture_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ImmediateGeometry_Ctor", (void*)godot_icall_ImmediateGeometry_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Input_get_singleton", (void*)godot_icall_Input_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_InputEventAction_Ctor", (void*)godot_icall_InputEventAction_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_InputEventJoypadButton_Ctor", (void*)godot_icall_InputEventJoypadButton_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_InputEventJoypadMotion_Ctor", (void*)godot_icall_InputEventJoypadMotion_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_InputEventKey_Ctor", (void*)godot_icall_InputEventKey_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_InputEventMagnifyGesture_Ctor", (void*)godot_icall_InputEventMagnifyGesture_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_InputEventMouseButton_Ctor", (void*)godot_icall_InputEventMouseButton_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_InputEventMouseMotion_Ctor", (void*)godot_icall_InputEventMouseMotion_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_InputEventPanGesture_Ctor", (void*)godot_icall_InputEventPanGesture_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_InputEventScreenDrag_Ctor", (void*)godot_icall_InputEventScreenDrag_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_InputEventScreenTouch_Ctor", (void*)godot_icall_InputEventScreenTouch_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_InputMap_get_singleton", (void*)godot_icall_InputMap_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_InterpolatedCamera_Ctor", (void*)godot_icall_InterpolatedCamera_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ItemList_Ctor", (void*)godot_icall_ItemList_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_JSONParseResult_Ctor", (void*)godot_icall_JSONParseResult_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_JavaScript_get_singleton", (void*)godot_icall_JavaScript_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_KinematicBody_Ctor", (void*)godot_icall_KinematicBody_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_KinematicBody2D_Ctor", (void*)godot_icall_KinematicBody2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_KinematicCollision_Ctor", (void*)godot_icall_KinematicCollision_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_KinematicCollision2D_Ctor", (void*)godot_icall_KinematicCollision2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Label_Ctor", (void*)godot_icall_Label_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_LargeTexture_Ctor", (void*)godot_icall_LargeTexture_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Light2D_Ctor", (void*)godot_icall_Light2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_LightOccluder2D_Ctor", (void*)godot_icall_LightOccluder2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Line2D_Ctor", (void*)godot_icall_Line2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_LineEdit_Ctor", (void*)godot_icall_LineEdit_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_LineShape2D_Ctor", (void*)godot_icall_LineShape2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_LinkButton_Ctor", (void*)godot_icall_LinkButton_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Listener_Ctor", (void*)godot_icall_Listener_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_MainLoop_Ctor", (void*)godot_icall_MainLoop_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_MarginContainer_Ctor", (void*)godot_icall_MarginContainer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_MenuButton_Ctor", (void*)godot_icall_MenuButton_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_MeshDataTool_Ctor", (void*)godot_icall_MeshDataTool_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_MeshInstance_Ctor", (void*)godot_icall_MeshInstance_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_MeshLibrary_Ctor", (void*)godot_icall_MeshLibrary_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_MobileVRInterface_Ctor", (void*)godot_icall_MobileVRInterface_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_MultiMesh_Ctor", (void*)godot_icall_MultiMesh_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_MultiMeshInstance_Ctor", (void*)godot_icall_MultiMeshInstance_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_NativeScript_Ctor", (void*)godot_icall_NativeScript_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Navigation_Ctor", (void*)godot_icall_Navigation_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Navigation2D_Ctor", (void*)godot_icall_Navigation2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_NavigationMesh_Ctor", (void*)godot_icall_NavigationMesh_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_NavigationMeshInstance_Ctor", (void*)godot_icall_NavigationMeshInstance_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_NavigationPolygon_Ctor", (void*)godot_icall_NavigationPolygon_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_NavigationPolygonInstance_Ctor", (void*)godot_icall_NavigationPolygonInstance_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_NetworkedMultiplayerENet_Ctor", (void*)godot_icall_NetworkedMultiplayerENet_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_NinePatchRect_Ctor", (void*)godot_icall_NinePatchRect_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Node_Ctor", (void*)godot_icall_Node_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Node2D_Ctor", (void*)godot_icall_Node2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Object_Ctor", (void*)godot_icall_Object_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_OccluderPolygon2D_Ctor", (void*)godot_icall_OccluderPolygon2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_OmniLight_Ctor", (void*)godot_icall_OmniLight_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_OptionButton_Ctor", (void*)godot_icall_OptionButton_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PCKPacker_Ctor", (void*)godot_icall_PCKPacker_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PHashTranslation_Ctor", (void*)godot_icall_PHashTranslation_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PackedDataContainer_Ctor", (void*)godot_icall_PackedDataContainer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PackedScene_Ctor", (void*)godot_icall_PackedScene_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PacketPeerStream_Ctor", (void*)godot_icall_PacketPeerStream_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PacketPeerUDP_Ctor", (void*)godot_icall_PacketPeerUDP_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Panel_Ctor", (void*)godot_icall_Panel_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PanelContainer_Ctor", (void*)godot_icall_PanelContainer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PanoramaSky_Ctor", (void*)godot_icall_PanoramaSky_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ParallaxBackground_Ctor", (void*)godot_icall_ParallaxBackground_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ParallaxLayer_Ctor", (void*)godot_icall_ParallaxLayer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Particles_Ctor", (void*)godot_icall_Particles_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Particles2D_Ctor", (void*)godot_icall_Particles2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ParticlesMaterial_Ctor", (void*)godot_icall_ParticlesMaterial_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Path_Ctor", (void*)godot_icall_Path_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Path2D_Ctor", (void*)godot_icall_Path2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PathFollow_Ctor", (void*)godot_icall_PathFollow_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PathFollow2D_Ctor", (void*)godot_icall_PathFollow2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Performance_get_singleton", (void*)godot_icall_Performance_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Physics2DServer_get_singleton", (void*)godot_icall_Physics2DServer_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Physics2DShapeQueryParameters_Ctor", (void*)godot_icall_Physics2DShapeQueryParameters_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Physics2DTestMotionResult_Ctor", (void*)godot_icall_Physics2DTestMotionResult_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PhysicsServer_get_singleton", (void*)godot_icall_PhysicsServer_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PhysicsShapeQueryParameters_Ctor", (void*)godot_icall_PhysicsShapeQueryParameters_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PinJoint_Ctor", (void*)godot_icall_PinJoint_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PinJoint2D_Ctor", (void*)godot_icall_PinJoint2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PlaneMesh_Ctor", (void*)godot_icall_PlaneMesh_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PlaneShape_Ctor", (void*)godot_icall_PlaneShape_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PluginScript_Ctor", (void*)godot_icall_PluginScript_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Polygon2D_Ctor", (void*)godot_icall_Polygon2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PolygonPathFinder_Ctor", (void*)godot_icall_PolygonPathFinder_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Popup_Ctor", (void*)godot_icall_Popup_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PopupDialog_Ctor", (void*)godot_icall_PopupDialog_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PopupMenu_Ctor", (void*)godot_icall_PopupMenu_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PopupPanel_Ctor", (void*)godot_icall_PopupPanel_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Position2D_Ctor", (void*)godot_icall_Position2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Position3D_Ctor", (void*)godot_icall_Position3D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PrismMesh_Ctor", (void*)godot_icall_PrismMesh_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ProceduralSky_Ctor", (void*)godot_icall_ProceduralSky_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ProgressBar_Ctor", (void*)godot_icall_ProgressBar_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ProjectSettings_get_singleton", (void*)godot_icall_ProjectSettings_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ProximityGroup_Ctor", (void*)godot_icall_ProximityGroup_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_QuadMesh_Ctor", (void*)godot_icall_QuadMesh_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Range_Ctor", (void*)godot_icall_Range_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_RayCast_Ctor", (void*)godot_icall_RayCast_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_RayCast2D_Ctor", (void*)godot_icall_RayCast2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_RayShape_Ctor", (void*)godot_icall_RayShape_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_RayShape2D_Ctor", (void*)godot_icall_RayShape2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_RectangleShape2D_Ctor", (void*)godot_icall_RectangleShape2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Reference_Ctor", (void*)godot_icall_Reference_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ReferenceRect_Ctor", (void*)godot_icall_ReferenceRect_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ReflectionProbe_Ctor", (void*)godot_icall_ReflectionProbe_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_RegEx_Ctor", (void*)godot_icall_RegEx_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_RegExMatch_Ctor", (void*)godot_icall_RegExMatch_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_RemoteTransform_Ctor", (void*)godot_icall_RemoteTransform_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_RemoteTransform2D_Ctor", (void*)godot_icall_RemoteTransform2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Resource_Ctor", (void*)godot_icall_Resource_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ResourcePreloader_Ctor", (void*)godot_icall_ResourcePreloader_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_RichTextLabel_Ctor", (void*)godot_icall_RichTextLabel_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_RigidBody_Ctor", (void*)godot_icall_RigidBody_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_RigidBody2D_Ctor", (void*)godot_icall_RigidBody2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_SceneTree_Ctor", (void*)godot_icall_SceneTree_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ScrollBar_Ctor", (void*)godot_icall_ScrollBar_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ScrollContainer_Ctor", (void*)godot_icall_ScrollContainer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_SegmentShape2D_Ctor", (void*)godot_icall_SegmentShape2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Shader_Ctor", (void*)godot_icall_Shader_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ShaderMaterial_Ctor", (void*)godot_icall_ShaderMaterial_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ShortCut_Ctor", (void*)godot_icall_ShortCut_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Skeleton_Ctor", (void*)godot_icall_Skeleton_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Slider_Ctor", (void*)godot_icall_Slider_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_SliderJoint_Ctor", (void*)godot_icall_SliderJoint_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Spatial_Ctor", (void*)godot_icall_Spatial_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_SpatialMaterial_Ctor", (void*)godot_icall_SpatialMaterial_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_SpatialVelocityTracker_Ctor", (void*)godot_icall_SpatialVelocityTracker_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_SphereMesh_Ctor", (void*)godot_icall_SphereMesh_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_SphereShape_Ctor", (void*)godot_icall_SphereShape_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_SpinBox_Ctor", (void*)godot_icall_SpinBox_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_SpotLight_Ctor", (void*)godot_icall_SpotLight_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Sprite_Ctor", (void*)godot_icall_Sprite_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Sprite3D_Ctor", (void*)godot_icall_Sprite3D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_SpriteFrames_Ctor", (void*)godot_icall_SpriteFrames_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_StaticBody_Ctor", (void*)godot_icall_StaticBody_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_StaticBody2D_Ctor", (void*)godot_icall_StaticBody2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_StreamPeerBuffer_Ctor", (void*)godot_icall_StreamPeerBuffer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_StreamPeerSSL_Ctor", (void*)godot_icall_StreamPeerSSL_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_StreamPeerTCP_Ctor", (void*)godot_icall_StreamPeerTCP_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_StreamTexture_Ctor", (void*)godot_icall_StreamTexture_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_StyleBoxEmpty_Ctor", (void*)godot_icall_StyleBoxEmpty_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_StyleBoxFlat_Ctor", (void*)godot_icall_StyleBoxFlat_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_StyleBoxLine_Ctor", (void*)godot_icall_StyleBoxLine_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_StyleBoxTexture_Ctor", (void*)godot_icall_StyleBoxTexture_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_SurfaceTool_Ctor", (void*)godot_icall_SurfaceTool_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_TCP_Server_Ctor", (void*)godot_icall_TCP_Server_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_TabContainer_Ctor", (void*)godot_icall_TabContainer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Tabs_Ctor", (void*)godot_icall_Tabs_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_TextEdit_Ctor", (void*)godot_icall_TextEdit_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_TextureButton_Ctor", (void*)godot_icall_TextureButton_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_TextureProgress_Ctor", (void*)godot_icall_TextureProgress_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_TextureRect_Ctor", (void*)godot_icall_TextureRect_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Theme_Ctor", (void*)godot_icall_Theme_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_TileMap_Ctor", (void*)godot_icall_TileMap_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_TileSet_Ctor", (void*)godot_icall_TileSet_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Timer_Ctor", (void*)godot_icall_Timer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ToolButton_Ctor", (void*)godot_icall_ToolButton_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_TouchScreenButton_Ctor", (void*)godot_icall_TouchScreenButton_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Translation_Ctor", (void*)godot_icall_Translation_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_TranslationServer_get_singleton", (void*)godot_icall_TranslationServer_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Tree_Ctor", (void*)godot_icall_Tree_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_TriangleMesh_Ctor", (void*)godot_icall_TriangleMesh_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Tween_Ctor", (void*)godot_icall_Tween_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_UndoRedo_Ctor", (void*)godot_icall_UndoRedo_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VBoxContainer_Ctor", (void*)godot_icall_VBoxContainer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VScrollBar_Ctor", (void*)godot_icall_VScrollBar_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VSeparator_Ctor", (void*)godot_icall_VSeparator_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VSlider_Ctor", (void*)godot_icall_VSlider_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VSplitContainer_Ctor", (void*)godot_icall_VSplitContainer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VehicleBody_Ctor", (void*)godot_icall_VehicleBody_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VehicleWheel_Ctor", (void*)godot_icall_VehicleWheel_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VideoPlayer_Ctor", (void*)godot_icall_VideoPlayer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VideoStreamTheora_Ctor", (void*)godot_icall_VideoStreamTheora_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VideoStreamWebm_Ctor", (void*)godot_icall_VideoStreamWebm_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Viewport_Ctor", (void*)godot_icall_Viewport_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ViewportContainer_Ctor", (void*)godot_icall_ViewportContainer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ViewportTexture_Ctor", (void*)godot_icall_ViewportTexture_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisibilityEnabler_Ctor", (void*)godot_icall_VisibilityEnabler_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisibilityEnabler2D_Ctor", (void*)godot_icall_VisibilityEnabler2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisibilityNotifier_Ctor", (void*)godot_icall_VisibilityNotifier_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisibilityNotifier2D_Ctor", (void*)godot_icall_VisibilityNotifier2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScript_Ctor", (void*)godot_icall_VisualScript_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptBasicTypeConstant_Ctor", (void*)godot_icall_VisualScriptBasicTypeConstant_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptBuiltinFunc_Ctor", (void*)godot_icall_VisualScriptBuiltinFunc_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptClassConstant_Ctor", (void*)godot_icall_VisualScriptClassConstant_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptComment_Ctor", (void*)godot_icall_VisualScriptComment_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptCondition_Ctor", (void*)godot_icall_VisualScriptCondition_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptConstant_Ctor", (void*)godot_icall_VisualScriptConstant_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptConstructor_Ctor", (void*)godot_icall_VisualScriptConstructor_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptCustomNode_Ctor", (void*)godot_icall_VisualScriptCustomNode_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptDeconstruct_Ctor", (void*)godot_icall_VisualScriptDeconstruct_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptEmitSignal_Ctor", (void*)godot_icall_VisualScriptEmitSignal_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptEngineSingleton_Ctor", (void*)godot_icall_VisualScriptEngineSingleton_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptExpression_Ctor", (void*)godot_icall_VisualScriptExpression_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptFunction_Ctor", (void*)godot_icall_VisualScriptFunction_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptFunctionCall_Ctor", (void*)godot_icall_VisualScriptFunctionCall_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptGlobalConstant_Ctor", (void*)godot_icall_VisualScriptGlobalConstant_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptIndexGet_Ctor", (void*)godot_icall_VisualScriptIndexGet_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptIndexSet_Ctor", (void*)godot_icall_VisualScriptIndexSet_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptInputAction_Ctor", (void*)godot_icall_VisualScriptInputAction_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptIterator_Ctor", (void*)godot_icall_VisualScriptIterator_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptLocalVar_Ctor", (void*)godot_icall_VisualScriptLocalVar_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptLocalVarSet_Ctor", (void*)godot_icall_VisualScriptLocalVarSet_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptMathConstant_Ctor", (void*)godot_icall_VisualScriptMathConstant_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptOperator_Ctor", (void*)godot_icall_VisualScriptOperator_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptPreload_Ctor", (void*)godot_icall_VisualScriptPreload_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptPropertyGet_Ctor", (void*)godot_icall_VisualScriptPropertyGet_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptPropertySet_Ctor", (void*)godot_icall_VisualScriptPropertySet_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptResourcePath_Ctor", (void*)godot_icall_VisualScriptResourcePath_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptReturn_Ctor", (void*)godot_icall_VisualScriptReturn_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptSceneNode_Ctor", (void*)godot_icall_VisualScriptSceneNode_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptSceneTree_Ctor", (void*)godot_icall_VisualScriptSceneTree_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptSelect_Ctor", (void*)godot_icall_VisualScriptSelect_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptSelf_Ctor", (void*)godot_icall_VisualScriptSelf_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptSequence_Ctor", (void*)godot_icall_VisualScriptSequence_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptSubCall_Ctor", (void*)godot_icall_VisualScriptSubCall_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptSwitch_Ctor", (void*)godot_icall_VisualScriptSwitch_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptTypeCast_Ctor", (void*)godot_icall_VisualScriptTypeCast_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptVariableGet_Ctor", (void*)godot_icall_VisualScriptVariableGet_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptVariableSet_Ctor", (void*)godot_icall_VisualScriptVariableSet_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptWhile_Ctor", (void*)godot_icall_VisualScriptWhile_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptYield_Ctor", (void*)godot_icall_VisualScriptYield_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptYieldSignal_Ctor", (void*)godot_icall_VisualScriptYieldSignal_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualServer_get_singleton", (void*)godot_icall_VisualServer_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_WeakRef_Ctor", (void*)godot_icall_WeakRef_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_WindowDialog_Ctor", (void*)godot_icall_WindowDialog_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_World_Ctor", (void*)godot_icall_World_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_World2D_Ctor", (void*)godot_icall_World2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_WorldEnvironment_Ctor", (void*)godot_icall_WorldEnvironment_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_XMLParser_Ctor", (void*)godot_icall_XMLParser_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_YSort_Ctor", (void*)godot_icall_YSort_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall__ClassDB_get_singleton", (void*)godot_icall__ClassDB_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Directory_Ctor", (void*)godot_icall_Directory_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall__Engine_get_singleton", (void*)godot_icall__Engine_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_File_Ctor", (void*)godot_icall_File_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall__Geometry_get_singleton", (void*)godot_icall__Geometry_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall__GodotSharp_get_singleton", (void*)godot_icall__GodotSharp_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall__JSON_get_singleton", (void*)godot_icall__JSON_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall__Marshalls_get_singleton", (void*)godot_icall__Marshalls_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Mutex_Ctor", (void*)godot_icall_Mutex_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall__OS_get_singleton", (void*)godot_icall__OS_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall__ResourceLoader_get_singleton", (void*)godot_icall__ResourceLoader_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall__ResourceSaver_get_singleton", (void*)godot_icall__ResourceSaver_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Semaphore_Ctor", (void*)godot_icall_Semaphore_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Thread_Ctor", (void*)godot_icall_Thread_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall__VisualScriptEditor_get_singleton", (void*)godot_icall__VisualScriptEditor_get_singleton);
#ifdef TOOLS_ENABLED
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorExportPlugin_Ctor", (void*)godot_icall_EditorExportPlugin_Ctor);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorFileDialog_Ctor", (void*)godot_icall_EditorFileDialog_Ctor);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorFileSystemDirectory_Ctor", (void*)godot_icall_EditorFileSystemDirectory_Ctor);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorImportPlugin_Ctor", (void*)godot_icall_EditorImportPlugin_Ctor);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorPlugin_Ctor", (void*)godot_icall_EditorPlugin_Ctor);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorResourceConversionPlugin_Ctor", (void*)godot_icall_EditorResourceConversionPlugin_Ctor);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorResourcePreviewGenerator_Ctor", (void*)godot_icall_EditorResourcePreviewGenerator_Ctor);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorScenePostImport_Ctor", (void*)godot_icall_EditorScenePostImport_Ctor);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorScript_Ctor", (void*)godot_icall_EditorScript_Ctor);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorSelection_Ctor", (void*)godot_icall_EditorSelection_Ctor);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorSpatialGizmo_Ctor", (void*)godot_icall_EditorSpatialGizmo_Ctor);
#endif // TOOLS_ENABLED
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_0", (void*)godot_icall_1_0);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_1", (void*)godot_icall_0_1);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_2", (void*)godot_icall_0_2);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_3", (void*)godot_icall_0_3);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_4", (void*)godot_icall_0_4);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_5", (void*)godot_icall_0_5);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_6", (void*)godot_icall_1_6);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_7", (void*)godot_icall_1_7);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_8", (void*)godot_icall_0_8);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_9", (void*)godot_icall_1_9);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_10", (void*)godot_icall_1_10);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_11", (void*)godot_icall_0_11);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_12", (void*)godot_icall_0_12);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_13", (void*)godot_icall_0_13);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_14", (void*)godot_icall_1_14);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_15", (void*)godot_icall_0_15);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_16", (void*)godot_icall_2_16);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_17", (void*)godot_icall_1_17);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_18", (void*)godot_icall_0_18);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_19", (void*)godot_icall_1_19);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_20", (void*)godot_icall_1_20);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_21", (void*)godot_icall_1_21);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_22", (void*)godot_icall_3_22);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_23", (void*)godot_icall_1_23);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_24", (void*)godot_icall_2_24);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_25", (void*)godot_icall_2_25);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_26", (void*)godot_icall_1_26);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_27", (void*)godot_icall_1_27);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_28", (void*)godot_icall_3_28);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_29", (void*)godot_icall_2_29);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_30", (void*)godot_icall_2_30);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_31", (void*)godot_icall_1_31);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_32", (void*)godot_icall_1_32);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_33", (void*)godot_icall_2_33);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_34", (void*)godot_icall_2_34);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_35", (void*)godot_icall_0_35);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_36", (void*)godot_icall_0_36);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_37", (void*)godot_icall_3_37);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_38", (void*)godot_icall_1_38);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_39", (void*)godot_icall_1_39);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_40", (void*)godot_icall_1_40);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_41", (void*)godot_icall_0_41);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_42", (void*)godot_icall_1_42);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_43", (void*)godot_icall_2_43);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_44", (void*)godot_icall_1_44);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_45", (void*)godot_icall_2_45);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_46", (void*)godot_icall_1_46);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_47", (void*)godot_icall_2_47);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_48", (void*)godot_icall_5_48);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_49", (void*)godot_icall_4_49);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_50", (void*)godot_icall_3_50);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_51", (void*)godot_icall_3_51);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_52", (void*)godot_icall_2_52);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_53", (void*)godot_icall_2_53);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_54", (void*)godot_icall_3_54);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_55", (void*)godot_icall_2_55);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_56", (void*)godot_icall_3_56);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_57", (void*)godot_icall_2_57);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_58", (void*)godot_icall_2_58);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_59", (void*)godot_icall_2_59);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_60", (void*)godot_icall_2_60);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_61", (void*)godot_icall_1_61);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_62", (void*)godot_icall_1_62);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_63", (void*)godot_icall_0_63);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_64", (void*)godot_icall_1_64);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_65", (void*)godot_icall_3_65);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_66", (void*)godot_icall_2_66);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_67", (void*)godot_icall_4_67);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_68", (void*)godot_icall_2_68);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_69", (void*)godot_icall_1_69);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_70", (void*)godot_icall_0_70);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_71", (void*)godot_icall_2_71);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_72", (void*)godot_icall_1_72);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_73", (void*)godot_icall_2_73);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_74", (void*)godot_icall_2_74);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_75", (void*)godot_icall_1_75);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_76", (void*)godot_icall_2_76);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_77", (void*)godot_icall_2_77);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_78", (void*)godot_icall_3_78);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_79", (void*)godot_icall_1_79);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_80", (void*)godot_icall_2_80);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_81", (void*)godot_icall_2_81);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_82", (void*)godot_icall_1_82);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_83", (void*)godot_icall_2_83);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_84", (void*)godot_icall_3_84);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_85", (void*)godot_icall_2_85);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_86", (void*)godot_icall_3_86);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_87", (void*)godot_icall_3_87);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_88", (void*)godot_icall_1_88);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_89", (void*)godot_icall_1_89);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_90", (void*)godot_icall_1_90);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_91", (void*)godot_icall_4_91);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_92", (void*)godot_icall_3_92);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_93", (void*)godot_icall_2_93);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_94", (void*)godot_icall_1_94);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_95", (void*)godot_icall_1_95);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_96", (void*)godot_icall_1_96);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_97", (void*)godot_icall_0_97);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_98", (void*)godot_icall_0_98);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_99", (void*)godot_icall_1_99);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_100", (void*)godot_icall_0_100);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_101", (void*)godot_icall_3_101);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_102", (void*)godot_icall_2_102);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_103", (void*)godot_icall_3_103);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_104", (void*)godot_icall_0_104);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_105", (void*)godot_icall_1_105);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_106", (void*)godot_icall_0_106);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_107", (void*)godot_icall_0_107);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_108", (void*)godot_icall_0_108);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_109", (void*)godot_icall_0_109);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_110", (void*)godot_icall_2_110);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_111", (void*)godot_icall_1_111);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_112", (void*)godot_icall_2_112);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_113", (void*)godot_icall_1_113);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_114", (void*)godot_icall_0_114);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_115", (void*)godot_icall_5_115);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_116", (void*)godot_icall_1_116);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_117", (void*)godot_icall_2_117);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_118", (void*)godot_icall_1_118);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_119", (void*)godot_icall_0_119);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_120", (void*)godot_icall_1_120);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_121", (void*)godot_icall_0_121);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_122", (void*)godot_icall_0_122);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_123", (void*)godot_icall_1_123);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_124", (void*)godot_icall_1_124);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_125", (void*)godot_icall_1_125);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_126", (void*)godot_icall_1_126);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_127", (void*)godot_icall_3_127);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_128", (void*)godot_icall_0_128);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_129", (void*)godot_icall_0_129);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_130", (void*)godot_icall_0_130);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_131", (void*)godot_icall_1_131);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_132", (void*)godot_icall_0_132);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_133", (void*)godot_icall_5_133);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_134", (void*)godot_icall_4_134);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_135", (void*)godot_icall_4_135);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_136", (void*)godot_icall_3_136);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_137", (void*)godot_icall_3_137);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_138", (void*)godot_icall_4_138);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_6_139", (void*)godot_icall_6_139);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_7_140", (void*)godot_icall_7_140);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_141", (void*)godot_icall_2_141);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_6_142", (void*)godot_icall_6_142);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_6_143", (void*)godot_icall_6_143);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_6_144", (void*)godot_icall_6_144);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_145", (void*)godot_icall_5_145);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_146", (void*)godot_icall_5_146);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_147", (void*)godot_icall_3_147);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_148", (void*)godot_icall_1_148);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_149", (void*)godot_icall_0_149);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_150", (void*)godot_icall_0_150);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_151", (void*)godot_icall_0_151);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_152", (void*)godot_icall_1_152);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_153", (void*)godot_icall_1_153);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_154", (void*)godot_icall_1_154);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_155", (void*)godot_icall_2_155);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_156", (void*)godot_icall_1_156);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_157", (void*)godot_icall_1_157);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_158", (void*)godot_icall_2_158);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_159", (void*)godot_icall_2_159);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_160", (void*)godot_icall_1_160);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_161", (void*)godot_icall_2_161);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_162", (void*)godot_icall_1_162);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_163", (void*)godot_icall_0_163);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_164", (void*)godot_icall_0_164);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_165", (void*)godot_icall_0_165);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_166", (void*)godot_icall_0_166);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_167", (void*)godot_icall_1_167);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_168", (void*)godot_icall_0_168);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_169", (void*)godot_icall_3_169);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_170", (void*)godot_icall_3_170);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_171", (void*)godot_icall_2_171);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_172", (void*)godot_icall_1_172);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_173", (void*)godot_icall_2_173);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_174", (void*)godot_icall_4_174);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_175", (void*)godot_icall_4_175);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_176", (void*)godot_icall_0_176);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_177", (void*)godot_icall_0_177);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_178", (void*)godot_icall_2_178);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_179", (void*)godot_icall_2_179);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_180", (void*)godot_icall_2_180);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_181", (void*)godot_icall_2_181);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_182", (void*)godot_icall_2_182);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_183", (void*)godot_icall_1_183);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_184", (void*)godot_icall_1_184);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_185", (void*)godot_icall_2_185);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_186", (void*)godot_icall_1_186);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_187", (void*)godot_icall_5_187);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_188", (void*)godot_icall_1_188);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_189", (void*)godot_icall_2_189);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_190", (void*)godot_icall_1_190);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_191", (void*)godot_icall_4_191);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_192", (void*)godot_icall_2_192);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_193", (void*)godot_icall_2_193);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_194", (void*)godot_icall_1_194);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_195", (void*)godot_icall_2_195);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_196", (void*)godot_icall_2_196);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_197", (void*)godot_icall_4_197);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_198", (void*)godot_icall_2_198);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_199", (void*)godot_icall_1_199);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_200", (void*)godot_icall_2_200);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_201", (void*)godot_icall_0_201);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_202", (void*)godot_icall_2_202);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_203", (void*)godot_icall_0_203);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_204", (void*)godot_icall_0_204);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_205", (void*)godot_icall_1_205);
#ifdef TOOLS_ENABLED
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_2_206", (void*)godot_icall_2_206);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_3_207", (void*)godot_icall_3_207);
#endif
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_208", (void*)godot_icall_0_208);
#ifdef TOOLS_ENABLED
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_0_209", (void*)godot_icall_0_209);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_1_210", (void*)godot_icall_1_210);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_1_211", (void*)godot_icall_1_211);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_2_212", (void*)godot_icall_2_212);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_0_213", (void*)godot_icall_0_213);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_0_214", (void*)godot_icall_0_214);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_0_215", (void*)godot_icall_0_215);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_0_216", (void*)godot_icall_0_216);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_0_217", (void*)godot_icall_0_217);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_2_218", (void*)godot_icall_2_218);
#endif
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_219", (void*)godot_icall_2_219);
#ifdef TOOLS_ENABLED
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_2_220", (void*)godot_icall_2_220);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_2_221", (void*)godot_icall_2_221);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_4_222", (void*)godot_icall_4_222);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_0_223", (void*)godot_icall_0_223);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_0_224", (void*)godot_icall_0_224);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_4_225", (void*)godot_icall_4_225);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_4_226", (void*)godot_icall_4_226);
#endif
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_227", (void*)godot_icall_2_227);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_228", (void*)godot_icall_1_228);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_229", (void*)godot_icall_1_229);
#ifdef TOOLS_ENABLED
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_3_230", (void*)godot_icall_3_230);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_3_231", (void*)godot_icall_3_231);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_2_232", (void*)godot_icall_2_232);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_2_233", (void*)godot_icall_2_233);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_3_234", (void*)godot_icall_3_234);
#endif
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_235", (void*)godot_icall_0_235);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_236", (void*)godot_icall_5_236);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_237", (void*)godot_icall_5_237);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_238", (void*)godot_icall_1_238);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_239", (void*)godot_icall_0_239);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_240", (void*)godot_icall_3_240);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_241", (void*)godot_icall_0_241);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_242", (void*)godot_icall_1_242);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_243", (void*)godot_icall_1_243);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_244", (void*)godot_icall_0_244);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_245", (void*)godot_icall_2_245);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_246", (void*)godot_icall_1_246);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_247", (void*)godot_icall_2_247);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_248", (void*)godot_icall_2_248);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_249", (void*)godot_icall_1_249);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_250", (void*)godot_icall_1_250);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_251", (void*)godot_icall_1_251);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_252", (void*)godot_icall_1_252);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_253", (void*)godot_icall_0_253);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_254", (void*)godot_icall_0_254);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_255", (void*)godot_icall_4_255);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_256", (void*)godot_icall_4_256);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_257", (void*)godot_icall_4_257);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_9_258", (void*)godot_icall_9_258);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_259", (void*)godot_icall_0_259);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_260", (void*)godot_icall_5_260);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_261", (void*)godot_icall_3_261);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_262", (void*)godot_icall_3_262);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_263", (void*)godot_icall_4_263);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_264", (void*)godot_icall_4_264);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_265", (void*)godot_icall_0_265);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_266", (void*)godot_icall_4_266);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_267", (void*)godot_icall_4_267);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_268", (void*)godot_icall_1_268);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_269", (void*)godot_icall_5_269);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_270", (void*)godot_icall_2_270);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_271", (void*)godot_icall_4_271);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_272", (void*)godot_icall_5_272);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_273", (void*)godot_icall_3_273);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_274", (void*)godot_icall_3_274);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_275", (void*)godot_icall_4_275);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_276", (void*)godot_icall_1_276);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_277", (void*)godot_icall_3_277);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_278", (void*)godot_icall_2_278);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_279", (void*)godot_icall_4_279);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_280", (void*)godot_icall_2_280);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_281", (void*)godot_icall_1_281);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_282", (void*)godot_icall_4_282);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_283", (void*)godot_icall_4_283);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_284", (void*)godot_icall_4_284);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_285", (void*)godot_icall_2_285);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_286", (void*)godot_icall_1_286);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_287", (void*)godot_icall_2_287);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_288", (void*)godot_icall_2_288);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_289", (void*)godot_icall_1_289);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_290", (void*)godot_icall_2_290);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_291", (void*)godot_icall_1_291);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_292", (void*)godot_icall_3_292);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_293", (void*)godot_icall_2_293);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_294", (void*)godot_icall_2_294);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_295", (void*)godot_icall_1_295);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_296", (void*)godot_icall_2_296);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_297", (void*)godot_icall_1_297);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_298", (void*)godot_icall_2_298);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_299", (void*)godot_icall_0_299);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_300", (void*)godot_icall_0_300);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_301", (void*)godot_icall_1_301);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_302", (void*)godot_icall_2_302);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_303", (void*)godot_icall_1_303);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_304", (void*)godot_icall_5_304);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_305", (void*)godot_icall_2_305);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_306", (void*)godot_icall_1_306);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_307", (void*)godot_icall_1_307);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_308", (void*)godot_icall_5_308);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_309", (void*)godot_icall_2_309);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_310", (void*)godot_icall_1_310);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_311", (void*)godot_icall_0_311);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_312", (void*)godot_icall_2_312);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_313", (void*)godot_icall_0_313);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_314", (void*)godot_icall_0_314);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_315", (void*)godot_icall_1_315);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_316", (void*)godot_icall_1_316);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_317", (void*)godot_icall_0_317);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_318", (void*)godot_icall_2_318);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_319", (void*)godot_icall_1_319);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_320", (void*)godot_icall_2_320);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_321", (void*)godot_icall_1_321);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_322", (void*)godot_icall_2_322);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_323", (void*)godot_icall_2_323);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_324", (void*)godot_icall_1_324);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_325", (void*)godot_icall_0_325);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_326", (void*)godot_icall_2_326);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_327", (void*)godot_icall_1_327);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_328", (void*)godot_icall_1_328);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_329", (void*)godot_icall_0_329);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_330", (void*)godot_icall_3_330);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_331", (void*)godot_icall_3_331);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_332", (void*)godot_icall_3_332);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_333", (void*)godot_icall_1_333);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_334", (void*)godot_icall_3_334);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_335", (void*)godot_icall_3_335);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_336", (void*)godot_icall_1_336);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_337", (void*)godot_icall_0_337);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_338", (void*)godot_icall_2_338);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_339", (void*)godot_icall_2_339);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_340", (void*)godot_icall_1_340);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_341", (void*)godot_icall_0_341);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_342", (void*)godot_icall_4_342);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_343", (void*)godot_icall_4_343);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_344", (void*)godot_icall_3_344);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_345", (void*)godot_icall_1_345);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_346", (void*)godot_icall_1_346);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_347", (void*)godot_icall_1_347);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_348", (void*)godot_icall_3_348);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_349", (void*)godot_icall_1_349);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_350", (void*)godot_icall_1_350);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_351", (void*)godot_icall_2_351);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_352", (void*)godot_icall_3_352);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_353", (void*)godot_icall_0_353);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_354", (void*)godot_icall_0_354);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_355", (void*)godot_icall_2_355);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_356", (void*)godot_icall_3_356);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_357", (void*)godot_icall_3_357);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_358", (void*)godot_icall_1_358);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_359", (void*)godot_icall_1_359);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_360", (void*)godot_icall_2_360);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_361", (void*)godot_icall_1_361);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_362", (void*)godot_icall_0_362);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_363", (void*)godot_icall_2_363);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_364", (void*)godot_icall_2_364);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_365", (void*)godot_icall_5_365);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_366", (void*)godot_icall_3_366);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_367", (void*)godot_icall_3_367);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_368", (void*)godot_icall_3_368);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_369", (void*)godot_icall_1_369);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_370", (void*)godot_icall_1_370);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_371", (void*)godot_icall_0_371);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_372", (void*)godot_icall_1_372);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_373", (void*)godot_icall_3_373);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_374", (void*)godot_icall_0_374);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_375", (void*)godot_icall_0_375);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_376", (void*)godot_icall_0_376);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_377", (void*)godot_icall_0_377);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_378", (void*)godot_icall_1_378);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_379", (void*)godot_icall_0_379);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_380", (void*)godot_icall_4_380);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_381", (void*)godot_icall_4_381);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_382", (void*)godot_icall_2_382);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_383", (void*)godot_icall_1_383);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_384", (void*)godot_icall_1_384);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_385", (void*)godot_icall_2_385);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_386", (void*)godot_icall_1_386);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_387", (void*)godot_icall_1_387);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_388", (void*)godot_icall_2_388);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_389", (void*)godot_icall_1_389);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_390", (void*)godot_icall_3_390);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_391", (void*)godot_icall_2_391);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_392", (void*)godot_icall_1_392);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_393", (void*)godot_icall_2_393);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_394", (void*)godot_icall_1_394);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_395", (void*)godot_icall_2_395);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_396", (void*)godot_icall_3_396);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_397", (void*)godot_icall_3_397);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_398", (void*)godot_icall_3_398);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_399", (void*)godot_icall_3_399);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_400", (void*)godot_icall_2_400);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_401", (void*)godot_icall_2_401);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_402", (void*)godot_icall_1_402);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_403", (void*)godot_icall_3_403);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_404", (void*)godot_icall_2_404);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_405", (void*)godot_icall_2_405);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_406", (void*)godot_icall_1_406);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_407", (void*)godot_icall_3_407);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_408", (void*)godot_icall_3_408);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_409", (void*)godot_icall_2_409);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_410", (void*)godot_icall_4_410);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_411", (void*)godot_icall_5_411);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_412", (void*)godot_icall_1_412);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_413", (void*)godot_icall_3_413);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_414", (void*)godot_icall_5_414);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_415", (void*)godot_icall_4_415);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_416", (void*)godot_icall_2_416);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_417", (void*)godot_icall_0_417);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_418", (void*)godot_icall_4_418);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_419", (void*)godot_icall_2_419);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_420", (void*)godot_icall_1_420);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_421", (void*)godot_icall_3_421);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_422", (void*)godot_icall_3_422);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_423", (void*)godot_icall_2_423);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_424", (void*)godot_icall_2_424);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_425", (void*)godot_icall_1_425);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_426", (void*)godot_icall_2_426);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_427", (void*)godot_icall_2_427);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_428", (void*)godot_icall_1_428);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_429", (void*)godot_icall_3_429);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_430", (void*)godot_icall_2_430);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_431", (void*)godot_icall_1_431);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_432", (void*)godot_icall_4_432);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_433", (void*)godot_icall_1_433);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_434", (void*)godot_icall_4_434);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_435", (void*)godot_icall_2_435);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_436", (void*)godot_icall_4_436);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_437", (void*)godot_icall_3_437);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_438", (void*)godot_icall_4_438);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_439", (void*)godot_icall_3_439);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_440", (void*)godot_icall_2_440);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_441", (void*)godot_icall_2_441);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_442", (void*)godot_icall_4_442);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_443", (void*)godot_icall_3_443);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_444", (void*)godot_icall_3_444);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_445", (void*)godot_icall_4_445);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_446", (void*)godot_icall_3_446);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_447", (void*)godot_icall_3_447);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_448", (void*)godot_icall_1_448);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_449", (void*)godot_icall_3_449);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_450", (void*)godot_icall_3_450);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_451", (void*)godot_icall_5_451);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_452", (void*)godot_icall_1_452);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_453", (void*)godot_icall_1_453);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_454", (void*)godot_icall_0_454);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_455", (void*)godot_icall_1_455);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_456", (void*)godot_icall_3_456);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_457", (void*)godot_icall_2_457);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_458", (void*)godot_icall_3_458);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_459", (void*)godot_icall_2_459);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_460", (void*)godot_icall_1_460);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_461", (void*)godot_icall_1_461);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_462", (void*)godot_icall_2_462);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_463", (void*)godot_icall_4_463);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_464", (void*)godot_icall_4_464);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_465", (void*)godot_icall_3_465);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_466", (void*)godot_icall_4_466);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_467", (void*)godot_icall_3_467);
#ifdef TOOLS_ENABLED
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_2_468", (void*)godot_icall_2_468);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_3_469", (void*)godot_icall_3_469);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_3_470", (void*)godot_icall_3_470);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_0_471", (void*)godot_icall_0_471);
#endif
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_472", (void*)godot_icall_1_472);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_473", (void*)godot_icall_0_473);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_474", (void*)godot_icall_3_474);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_475", (void*)godot_icall_5_475);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_476", (void*)godot_icall_3_476);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_477", (void*)godot_icall_5_477);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_478", (void*)godot_icall_0_478);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_479", (void*)godot_icall_0_479);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_480", (void*)godot_icall_0_480);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_481", (void*)godot_icall_0_481);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_482", (void*)godot_icall_2_482);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_483", (void*)godot_icall_3_483);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_484", (void*)godot_icall_0_484);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_485", (void*)godot_icall_3_485);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_486", (void*)godot_icall_2_486);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_487", (void*)godot_icall_3_487);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_488", (void*)godot_icall_1_488);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_489", (void*)godot_icall_0_489);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_490", (void*)godot_icall_3_490);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_491", (void*)godot_icall_2_491);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_492", (void*)godot_icall_2_492);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_493", (void*)godot_icall_4_493);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_6_494", (void*)godot_icall_6_494);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_495", (void*)godot_icall_3_495);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_496", (void*)godot_icall_1_496);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_497", (void*)godot_icall_2_497);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_498", (void*)godot_icall_0_498);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_499", (void*)godot_icall_1_499);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_500", (void*)godot_icall_0_500);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_501", (void*)godot_icall_3_501);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_502", (void*)godot_icall_4_502);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_503", (void*)godot_icall_4_503);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_504", (void*)godot_icall_5_504);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_6_505", (void*)godot_icall_6_505);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_7_506", (void*)godot_icall_7_506);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_507", (void*)godot_icall_0_507);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_508", (void*)godot_icall_0_508);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_509", (void*)godot_icall_3_509);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_510", (void*)godot_icall_3_510);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_511", (void*)godot_icall_0_511);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_512", (void*)godot_icall_0_512);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_7_513", (void*)godot_icall_7_513);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_514", (void*)godot_icall_5_514);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_515", (void*)godot_icall_2_515);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_516", (void*)godot_icall_1_516);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_517", (void*)godot_icall_3_517);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_518", (void*)godot_icall_3_518);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_519", (void*)godot_icall_2_519);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_520", (void*)godot_icall_5_520);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_521", (void*)godot_icall_1_521);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_522", (void*)godot_icall_1_522);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_523", (void*)godot_icall_1_523);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_524", (void*)godot_icall_0_524);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_525", (void*)godot_icall_1_525);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_526", (void*)godot_icall_2_526);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_527", (void*)godot_icall_1_527);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_528", (void*)godot_icall_5_528);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_529", (void*)godot_icall_1_529);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_530", (void*)godot_icall_3_530);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_531", (void*)godot_icall_3_531);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_532", (void*)godot_icall_5_532);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_533", (void*)godot_icall_2_533);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_534", (void*)godot_icall_2_534);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_8_535", (void*)godot_icall_8_535);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_8_536", (void*)godot_icall_8_536);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_8_537", (void*)godot_icall_8_537);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_9_538", (void*)godot_icall_9_538);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_9_539", (void*)godot_icall_9_539);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_9_540", (void*)godot_icall_9_540);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_9_541", (void*)godot_icall_9_541);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_542", (void*)godot_icall_3_542);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_543", (void*)godot_icall_3_543);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_544", (void*)godot_icall_0_544);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_545", (void*)godot_icall_3_545);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_546", (void*)godot_icall_0_546);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_547", (void*)godot_icall_0_547);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_548", (void*)godot_icall_4_548);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_549", (void*)godot_icall_2_549);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_550", (void*)godot_icall_3_550);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_551", (void*)godot_icall_2_551);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_552", (void*)godot_icall_4_552);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_553", (void*)godot_icall_4_553);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_554", (void*)godot_icall_5_554);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_555", (void*)godot_icall_5_555);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_556", (void*)godot_icall_3_556);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_557", (void*)godot_icall_2_557);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_558", (void*)godot_icall_1_558);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_559", (void*)godot_icall_3_559);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_560", (void*)godot_icall_3_560);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_561", (void*)godot_icall_1_561);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_562", (void*)godot_icall_0_562);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_563", (void*)godot_icall_2_563);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_564", (void*)godot_icall_5_564);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_565", (void*)godot_icall_3_565);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_566", (void*)godot_icall_2_566);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_567", (void*)godot_icall_3_567);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_568", (void*)godot_icall_2_568);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_569", (void*)godot_icall_1_569);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_570", (void*)godot_icall_3_570);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_571", (void*)godot_icall_1_571);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_572", (void*)godot_icall_3_572);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_573", (void*)godot_icall_2_573);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_574", (void*)godot_icall_3_574);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_575", (void*)godot_icall_2_575);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_576", (void*)godot_icall_5_576);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_577", (void*)godot_icall_2_577);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_578", (void*)godot_icall_2_578);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_579", (void*)godot_icall_2_579);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_580", (void*)godot_icall_2_580);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_581", (void*)godot_icall_2_581);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_582", (void*)godot_icall_1_582);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_583", (void*)godot_icall_3_583);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_584", (void*)godot_icall_3_584);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_585", (void*)godot_icall_2_585);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_586", (void*)godot_icall_3_586);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_6_587", (void*)godot_icall_6_587);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_588", (void*)godot_icall_5_588);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_589", (void*)godot_icall_3_589);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_590", (void*)godot_icall_4_590);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_7_591", (void*)godot_icall_7_591);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_8_592", (void*)godot_icall_8_592);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_11_593", (void*)godot_icall_11_593);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_7_594", (void*)godot_icall_7_594);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_7_595", (void*)godot_icall_7_595);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_8_596", (void*)godot_icall_8_596);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_597", (void*)godot_icall_3_597);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_6_598", (void*)godot_icall_6_598);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_599", (void*)godot_icall_3_599);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_600", (void*)godot_icall_2_600);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_601", (void*)godot_icall_4_601);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_602", (void*)godot_icall_3_602);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_603", (void*)godot_icall_3_603);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_604", (void*)godot_icall_0_604);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_605", (void*)godot_icall_2_605);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_606", (void*)godot_icall_2_606);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_607", (void*)godot_icall_2_607);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_608", (void*)godot_icall_3_608);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_609", (void*)godot_icall_3_609);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_610", (void*)godot_icall_2_610);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_611", (void*)godot_icall_2_611);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_612", (void*)godot_icall_0_612);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_613", (void*)godot_icall_1_613);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_614", (void*)godot_icall_3_614);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_615", (void*)godot_icall_3_615);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_616", (void*)godot_icall_3_616);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_617", (void*)godot_icall_1_617);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_618", (void*)godot_icall_1_618);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_619", (void*)godot_icall_4_619);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_620", (void*)godot_icall_5_620);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_621", (void*)godot_icall_4_621);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_622", (void*)godot_icall_4_622);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_623", (void*)godot_icall_4_623);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_624", (void*)godot_icall_4_624);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_625", (void*)godot_icall_3_625);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_626", (void*)godot_icall_3_626);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_627", (void*)godot_icall_5_627);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_628", (void*)godot_icall_4_628);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_629", (void*)godot_icall_4_629);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_630", (void*)godot_icall_3_630);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_631", (void*)godot_icall_4_631);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_632", (void*)godot_icall_1_632);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_633", (void*)godot_icall_1_633);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_634", (void*)godot_icall_2_634);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_635", (void*)godot_icall_1_635);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_636", (void*)godot_icall_1_636);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_637", (void*)godot_icall_1_637);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_638", (void*)godot_icall_1_638);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_639", (void*)godot_icall_4_639);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_640", (void*)godot_icall_1_640);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_641", (void*)godot_icall_4_641);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_642", (void*)godot_icall_2_642);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_643", (void*)godot_icall_3_643);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_644", (void*)godot_icall_3_644);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_645", (void*)godot_icall_1_645);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_646", (void*)godot_icall_4_646);
}
}
