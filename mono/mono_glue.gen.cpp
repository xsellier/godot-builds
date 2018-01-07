#include "glue_header.h"

void godot_icall_0_0(MethodBind* method, Object* ptr) {
	ERR_FAIL_NULL(ptr);
	method->ptrcall(ptr, NULL, NULL);
}

MonoString* godot_icall_0_1(MethodBind* method, Object* ptr) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

bool godot_icall_1_2(MethodBind* method, Object* ptr, MonoString* arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_2_3(MethodBind* method, Object* ptr, MonoString* arg1, MonoObject* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_4(MethodBind* method, Object* ptr, MonoString* arg1) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

void godot_icall_2_5(MethodBind* method, Object* ptr, NodePath* arg1, MonoObject* arg2) {
	ERR_FAIL_NULL(ptr);
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_6(MethodBind* method, Object* ptr, NodePath* arg1) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

MonoArray* godot_icall_0_7(MethodBind* method, Object* ptr) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoMarshal::Array_to_mono_array(ret);
}

void godot_icall_2_8(MethodBind* method, Object* ptr, int arg1, bool arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_9(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return (int)ret;
}

void godot_icall_1_10(MethodBind* method, Object* ptr, Object* arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_0_11(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoArray* godot_icall_0_12(MethodBind* method, Object* ptr) {
	PoolStringArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoMarshal::PoolStringArray_to_mono_array(ret);
}

void godot_icall_2_13(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	Array arg2_in = GDMonoMarshal::mono_array_to_Array(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_14(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2) {
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

MonoObject* godot_icall_2_15(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	Array arg2_in = GDMonoMarshal::mono_array_to_Array(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

MonoArray* godot_icall_1_16(MethodBind* method, Object* ptr, MonoString* arg1) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Array_to_mono_array(ret);
}

int godot_icall_5_17(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2, MonoString* arg3, MonoArray* arg4, int arg5) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	Array arg4_in = GDMonoMarshal::mono_array_to_Array(arg4);
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { &arg1_in, arg2, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_3_18(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2, MonoString* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_3_19(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2, MonoString* arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_1_20(MethodBind* method, Object* ptr, bool arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_0_21(MethodBind* method, Object* ptr) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

MonoString* godot_icall_1_22(MethodBind* method, Object* ptr, MonoString* arg1) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

Object* godot_icall_Object_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Object");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Reference_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Reference");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_23(MethodBind* method, Object* ptr, MonoString* arg1) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

RID* godot_icall_0_24(MethodBind* method, Object* ptr) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return memnew(RID(ret));
}

MonoObject* godot_icall_0_25(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_1_26(MethodBind* method, Object* ptr, bool arg1) {
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

bool godot_icall_1_27(MethodBind* method, Object* ptr, Object* arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

int godot_icall_1_28(MethodBind* method, Object* ptr, bool arg1) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

MonoObject* godot_icall_0_29(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_30(MethodBind* method, Object* ptr) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

Object* godot_icall_WeakRef_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "WeakRef");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_31(MethodBind* method, Object* ptr) {
	Vector2 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	MARSHALLED_OUT(Vector2, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector2), ret_out);
}

int godot_icall_0_32(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

MonoArray* godot_icall_0_33(MethodBind* method, Object* ptr) {
	PoolByteArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoMarshal::PoolByteArray_to_mono_array(ret);
}

void godot_icall_1_34(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_1_35(MethodBind* method, Object* ptr, int arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

void godot_icall_3_36(MethodBind* method, Object* ptr, int arg1, int arg2, int arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_37(MethodBind* method, Object* ptr, int arg1, int arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_38(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_4_39(MethodBind* method, Object* ptr, int arg1, int arg2, bool arg3, int arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3, &arg4 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_5_40(MethodBind* method, Object* ptr, int arg1, int arg2, bool arg3, int arg4, MonoArray* arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	PoolByteArray arg5_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg5);
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3, &arg4, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_1_41(MethodBind* method, Object* ptr, MonoString* arg1) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

int godot_icall_0_42(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

int godot_icall_3_43(MethodBind* method, Object* ptr, int arg1, int arg2, real_t arg3) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1, &arg2, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_3_44(MethodBind* method, Object* ptr, Object* arg1, real_t* arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Rect2, arg2, arg2_in);
	MARSHALLED_IN(Vector2, arg3, arg3_in);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_45(MethodBind* method, Object* ptr, Object* arg1, Object* arg2, real_t* arg3, real_t* arg4) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Rect2, arg3, arg3_in);
	MARSHALLED_IN(Vector2, arg4, arg4_in);
	const void* call_args[4] = { arg1, arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_46(MethodBind* method, Object* ptr, real_t* arg1) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Color, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_0_47(MethodBind* method, Object* ptr) {
	Rect2 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	MARSHALLED_OUT(Rect2, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Rect2), ret_out);
}

MonoObject* godot_icall_1_48(MethodBind* method, Object* ptr, real_t* arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Rect2, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_1_49(MethodBind* method, Object* ptr, MonoObject* arg1) {
	ERR_FAIL_NULL(ptr);
	Dictionary arg1_in = GDMonoMarshal::mono_object_to_Dictionary(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_0_50(MethodBind* method, Object* ptr) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoMarshal::Dictionary_to_mono_object(ret);
}

void godot_icall_3_51(MethodBind* method, Object* ptr, int arg1, int arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	MARSHALLED_IN(Color, arg3, arg3_in);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_52(MethodBind* method, Object* ptr, int arg1, int arg2) {
	Color ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Color, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Color), ret_out);
}

int godot_icall_1_53(MethodBind* method, Object* ptr, MonoArray* arg1) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	PoolByteArray arg1_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

Object* godot_icall_Image_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Image");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_54(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_1_55(MethodBind* method, Object* ptr, Object* arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

MonoObject* godot_icall_2_56(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Transform2D, arg1, arg1_in);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_InputEventKey_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InputEventKey");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_57(MethodBind* method, Object* ptr, real_t* arg1) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_58(MethodBind* method, Object* ptr, real_t arg1) {
	ERR_FAIL_NULL(ptr);
	double arg1_in = (double)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

real_t godot_icall_0_59(MethodBind* method, Object* ptr) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	method->ptrcall(ptr, NULL, &ret);
	return (real_t)ret;
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

Object* godot_icall_InputEventAction_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InputEventAction");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_InputEventMagnifyGesture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InputEventMagnifyGesture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_InputEventPanGesture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InputEventPanGesture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_60(MethodBind* method, Object* ptr, MonoArray* arg1) {
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

void godot_icall_1_61(MethodBind* method, Object* ptr, Object* arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_FuncRef_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "FuncRef");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoArray* godot_icall_1_62(MethodBind* method, Object* ptr, MonoArray* arg1) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	PoolByteArray arg1_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Array_to_mono_array(ret);
}

MonoArray* godot_icall_1_63(MethodBind* method, Object* ptr, int arg1) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Array_to_mono_array(ret);
}

void godot_icall_1_64(MethodBind* method, Object* ptr, MonoObject* arg1) {
	ERR_FAIL_NULL(ptr);
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoString* godot_icall_1_65(MethodBind* method, Object* ptr, int arg1) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

void godot_icall_1_66(MethodBind* method, Object* ptr, MonoArray* arg1) {
	ERR_FAIL_NULL(ptr);
	PoolByteArray arg1_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_0_67(MethodBind* method, Object* ptr) {
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

int godot_icall_2_68(MethodBind* method, Object* ptr, MonoString* arg1, int arg2) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

int godot_icall_0_69(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_StreamPeerTCP_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StreamPeerTCP");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int godot_icall_2_70(MethodBind* method, Object* ptr, int arg1, MonoString* arg2) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

MonoObject* godot_icall_0_71(MethodBind* method, Object* ptr) {
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

int godot_icall_1_72(MethodBind* method, Object* ptr, MonoObject* arg1) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

int godot_icall_3_73(MethodBind* method, Object* ptr, int arg1, MonoString* arg2, int arg3) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

Object* godot_icall_PacketPeerUDP_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PacketPeerUDP");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int godot_icall_1_74(MethodBind* method, Object* ptr, Object* arg1) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

int godot_icall_3_75(MethodBind* method, Object* ptr, Object* arg1, bool arg2, MonoString* arg3) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { arg1, &arg2, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

int godot_icall_0_76(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_StreamPeerSSL_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StreamPeerSSL");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoString* godot_icall_2_77(MethodBind* method, Object* ptr, MonoString* arg1, int arg2) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

int godot_icall_2_78(MethodBind* method, Object* ptr, MonoString* arg1, int arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

int godot_icall_1_79(MethodBind* method, Object* ptr, int arg1) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

Object* godot_icall_IP_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("IP");
}

Object* godot_icall_PacketPeerStream_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PacketPeerStream");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_80(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_81(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

bool godot_icall_1_82(MethodBind* method, Object* ptr, real_t arg1) {
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

void godot_icall_2_83(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_84(MethodBind* method, Object* ptr, MonoArray* arg1) {
	ERR_FAIL_NULL(ptr);
	PoolStringArray arg1_in = GDMonoMarshal::mono_array_to_PoolStringArray(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_Translation_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Translation");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PHashTranslation_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PHashTranslation");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_85(MethodBind* method, Object* ptr, MonoString* arg1, int arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_3_86(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, MonoArray* arg3) {
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

void godot_icall_3_87(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, MonoObject* arg3) {
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

int godot_icall_4_88(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, bool arg3, bool arg4) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3, &arg4 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

MonoObject* godot_icall_0_89(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int godot_icall_4_90(MethodBind* method, Object* ptr, int arg1, MonoString* arg2, MonoArray* arg3, MonoArray* arg4) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	PoolStringArray arg3_in = GDMonoMarshal::mono_array_to_PoolStringArray(arg3);
	PoolByteArray arg4_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg4);
	const void* call_args[4] = { &arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

int godot_icall_4_91(MethodBind* method, Object* ptr, int arg1, MonoString* arg2, MonoArray* arg3, MonoString* arg4) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	PoolStringArray arg3_in = GDMonoMarshal::mono_array_to_PoolStringArray(arg3);
	String arg4_in = GDMonoMarshal::mono_string_to_godot(arg4);
	const void* call_args[4] = { &arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

int godot_icall_0_92(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

MonoString* godot_icall_1_93(MethodBind* method, Object* ptr, MonoObject* arg1) {
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

MonoObject* godot_icall_0_94(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_TriangleMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TriangleMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int godot_icall_3_95(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, MonoArray* arg3) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	PoolByteArray arg3_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

int godot_icall_3_96(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, MonoString* arg3) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

int godot_icall_3_97(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, int arg3) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

MonoArray* godot_icall_1_98(MethodBind* method, Object* ptr, int arg1) {
	PoolByteArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolByteArray_to_mono_array(ret);
}

MonoArray* godot_icall_1_99(MethodBind* method, Object* ptr, MonoString* arg1) {
	PoolStringArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolStringArray_to_mono_array(ret);
}

int godot_icall_1_100(MethodBind* method, Object* ptr, MonoString* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

Object* godot_icall_File_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "_File");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int godot_icall_2_101(MethodBind* method, Object* ptr, bool arg1, bool arg2) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	const void* call_args[2] = { &arg1, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

int godot_icall_2_102(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

Object* godot_icall_Directory_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "_Directory");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int godot_icall_4_103(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, MonoObject* arg3, int arg4) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

Object* godot_icall_Thread_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "_Thread");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Mutex_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "_Mutex");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Semaphore_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "_Semaphore");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int godot_icall_0_104(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

int godot_icall_1_105(MethodBind* method, Object* ptr, int arg1) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

Object* godot_icall_XMLParser_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "XMLParser");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_106(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, MonoObject* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_3_107(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, MonoObject* arg3) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

bool godot_icall_2_108(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

Object* godot_icall_ConfigFile_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ConfigFile");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PCKPacker_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PCKPacker");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PackedDataContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PackedDataContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_109(MethodBind* method, Object* ptr, int arg1, real_t* arg2, real_t arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	MARSHALLED_IN(Vector3, arg2, arg2_in);
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_110(MethodBind* method, Object* ptr, int arg1) {
	Vector3 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector3, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector3), ret_out);
}

void godot_icall_2_111(MethodBind* method, Object* ptr, int arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	MARSHALLED_IN(Vector3, arg2, arg2_in);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

real_t godot_icall_1_112(MethodBind* method, Object* ptr, int arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

void godot_icall_2_113(MethodBind* method, Object* ptr, int arg1, real_t arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_1_114(MethodBind* method, Object* ptr, int arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

MonoArray* godot_icall_1_115(MethodBind* method, Object* ptr, int arg1) {
	PoolIntArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolIntArray_to_mono_array(ret);
}

void godot_icall_3_116(MethodBind* method, Object* ptr, int arg1, int arg2, bool arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_2_117(MethodBind* method, Object* ptr, int arg1, int arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

int godot_icall_1_118(MethodBind* method, Object* ptr, real_t* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	MARSHALLED_IN(Vector3, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

MonoObject* godot_icall_1_119(MethodBind* method, Object* ptr, real_t* arg1) {
	Vector3 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector3, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector3, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector3), ret_out);
}

MonoArray* godot_icall_2_120(MethodBind* method, Object* ptr, int arg1, int arg2) {
	PoolVector3Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolVector3Array_to_mono_array(ret);
}

MonoArray* godot_icall_2_121(MethodBind* method, Object* ptr, int arg1, int arg2) {
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

Object* godot_icall_EncodedObjectAsID_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EncodedObjectAsID");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_122(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_JSONParseResult_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "JSONParseResult");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoArray* godot_icall_1_123(MethodBind* method, Object* ptr, real_t* arg1) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector3, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Array_to_mono_array(ret);
}

MonoArray* godot_icall_4_124(MethodBind* method, Object* ptr, real_t arg1, real_t arg2, int arg3, int arg4) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	double arg1_in = (double)arg1;
	double arg2_in = (double)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Array_to_mono_array(ret);
}

MonoArray* godot_icall_5_125(MethodBind* method, Object* ptr, real_t arg1, real_t arg2, int arg3, int arg4, int arg5) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	double arg1_in = (double)arg1;
	double arg2_in = (double)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Array_to_mono_array(ret);
}

real_t godot_icall_4_126(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, real_t* arg3, real_t arg4) {
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

MonoObject* godot_icall_4_127(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, real_t* arg3, real_t* arg4) {
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

MonoArray* godot_icall_4_128(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, real_t* arg3, real_t* arg4) {
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

MonoArray* godot_icall_4_129(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, real_t* arg3, real_t* arg4) {
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

MonoObject* godot_icall_3_130(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, real_t* arg3) {
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

MonoObject* godot_icall_3_131(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, real_t* arg3) {
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

MonoObject* godot_icall_5_132(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, real_t* arg3, real_t* arg4, real_t* arg5) {
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

MonoArray* godot_icall_4_133(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, real_t* arg3, real_t arg4) {
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

MonoArray* godot_icall_4_134(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, real_t arg3, real_t arg4) {
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

MonoArray* godot_icall_3_135(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, MonoArray* arg3) {
	PoolVector3Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector3, arg1, arg1_in);
	MARSHALLED_IN(Vector3, arg2, arg2_in);
	Array arg3_in = GDMonoMarshal::mono_array_to_Array(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolVector3Array_to_mono_array(ret);
}

bool godot_icall_4_136(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, real_t* arg3, real_t* arg4) {
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

MonoArray* godot_icall_1_137(MethodBind* method, Object* ptr, MonoArray* arg1) {
	PoolIntArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	PoolVector2Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolIntArray_to_mono_array(ret);
}

MonoArray* godot_icall_1_138(MethodBind* method, Object* ptr, MonoArray* arg1) {
	PoolVector2Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	PoolVector2Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolVector2Array_to_mono_array(ret);
}

MonoArray* godot_icall_2_139(MethodBind* method, Object* ptr, MonoArray* arg1, real_t* arg2) {
	PoolVector3Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	PoolVector3Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector3Array(arg1);
	MARSHALLED_IN(Plane, arg2, arg2_in);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolVector3Array_to_mono_array(ret);
}

MonoObject* godot_icall_1_140(MethodBind* method, Object* ptr, MonoArray* arg1) {
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

MonoObject* godot_icall_2_141(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_3_142(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, bool arg3) {
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

int godot_icall_3_143(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2, int arg3) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

MonoArray* godot_icall_1_144(MethodBind* method, Object* ptr, Object* arg1) {
	PoolStringArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolStringArray_to_mono_array(ret);
}

Object* godot_icall__ResourceSaver_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("ResourceSaver");
}

MonoObject* godot_icall_1_145(MethodBind* method, Object* ptr, int arg1) {
	Vector2 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector2, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector2), ret_out);
}

void godot_icall_1_146(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_147(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

int godot_icall_4_148(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2, bool arg3, MonoArray* arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	PoolStringArray arg2_in = GDMonoMarshal::mono_array_to_PoolStringArray(arg2);
	Array arg4_in = GDMonoMarshal::mono_array_to_Array(arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

MonoObject* godot_icall_1_149(MethodBind* method, Object* ptr, bool arg1) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Dictionary_to_mono_object(ret);
}

MonoObject* godot_icall_1_150(MethodBind* method, Object* ptr, int arg1) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Dictionary_to_mono_object(ret);
}

int godot_icall_1_151(MethodBind* method, Object* ptr, MonoObject* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	Dictionary arg1_in = GDMonoMarshal::mono_object_to_Dictionary(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

MonoString* godot_icall_1_152(MethodBind* method, Object* ptr, int arg1) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

int godot_icall_4_153(MethodBind* method, Object* ptr, MonoString* arg1, real_t arg2, MonoString* arg3, MonoString* arg4) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	double arg2_in = (double)arg2;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	String arg4_in = GDMonoMarshal::mono_string_to_godot(arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

int godot_icall_0_154(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall__OS_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("OS");
}

MonoObject* godot_icall_0_155(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_1_156(MethodBind* method, Object* ptr, MonoString* arg1) {
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

MonoObject* godot_icall_2_157(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Dictionary_to_mono_object(ret);
}

MonoArray* godot_icall_2_158(MethodBind* method, Object* ptr, MonoString* arg1, bool arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Array_to_mono_array(ret);
}

MonoObject* godot_icall_2_159(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

int godot_icall_3_160(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, MonoObject* arg3) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

bool godot_icall_3_161(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, bool arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

MonoArray* godot_icall_2_162(MethodBind* method, Object* ptr, MonoString* arg1, bool arg2) {
	PoolStringArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolStringArray_to_mono_array(ret);
}

int godot_icall_2_163(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

Object* godot_icall__ClassDB_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("ClassDB");
}

MonoString* godot_icall_1_164(MethodBind* method, Object* ptr, MonoObject* arg1) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

MonoString* godot_icall_1_165(MethodBind* method, Object* ptr, MonoArray* arg1) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	PoolByteArray arg1_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

MonoArray* godot_icall_1_166(MethodBind* method, Object* ptr, MonoString* arg1) {
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

MonoString* godot_icall_3_167(MethodBind* method, Object* ptr, MonoObject* arg1, MonoString* arg2, bool arg3) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

MonoObject* godot_icall_1_168(MethodBind* method, Object* ptr, MonoString* arg1) {
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

void godot_icall_2_169(MethodBind* method, Object* ptr, MonoString* arg1, int arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_ProjectSettings_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("ProjectSettings");
}

void godot_icall_2_170(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_2_171(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

bool godot_icall_2_172(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2) {
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

Object* godot_icall_TranslationServer_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("TranslationServer");
}

real_t godot_icall_1_173(MethodBind* method, Object* ptr, int arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

Object* godot_icall_Performance_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("Performance");
}

RID* godot_icall_2_174(MethodBind* method, Object* ptr, Object* arg1, int arg2) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

void godot_icall_5_175(MethodBind* method, Object* ptr, RID* arg1, int arg2, int arg3, int arg4, int arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_176(MethodBind* method, Object* ptr, RID* arg1, Object* arg2, int arg3) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[3] = { arg1, arg2, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_177(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_2_178(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_1_179(MethodBind* method, Object* ptr, RID* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

int godot_icall_1_180(MethodBind* method, Object* ptr, RID* arg1) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_3_181(MethodBind* method, Object* ptr, RID* arg1, int arg2, int arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_182(MethodBind* method, Object* ptr, RID* arg1, MonoString* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoString* godot_icall_1_183(MethodBind* method, Object* ptr, RID* arg1) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

void godot_icall_3_184(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, int arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoArray* godot_icall_1_185(MethodBind* method, Object* ptr, RID* arg1) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Array_to_mono_array(ret);
}

void godot_icall_3_186(MethodBind* method, Object* ptr, RID* arg1, MonoString* arg2, RID* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[3] = { arg1, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

RID* godot_icall_2_187(MethodBind* method, Object* ptr, RID* arg1, MonoString* arg2) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

void godot_icall_2_188(MethodBind* method, Object* ptr, RID* arg1, RID* arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { arg1, arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

RID* godot_icall_1_189(MethodBind* method, Object* ptr, RID* arg1) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

void godot_icall_3_190(MethodBind* method, Object* ptr, RID* arg1, MonoString* arg2, MonoObject* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_191(MethodBind* method, Object* ptr, RID* arg1, MonoString* arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

void godot_icall_2_192(MethodBind* method, Object* ptr, RID* arg1, real_t arg2) {
	ERR_FAIL_NULL(ptr);
	double arg2_in = (double)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_5_193(MethodBind* method, Object* ptr, RID* arg1, int arg2, MonoArray* arg3, MonoArray* arg4, int arg5) {
	ERR_FAIL_NULL(ptr);
	Array arg3_in = GDMonoMarshal::mono_array_to_Array(arg3);
	Array arg4_in = GDMonoMarshal::mono_array_to_Array(arg4);
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { arg1, &arg2, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_194(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_1_195(MethodBind* method, Object* ptr, RID* arg1) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_3_196(MethodBind* method, Object* ptr, RID* arg1, int arg2, RID* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[3] = { arg1, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

RID* godot_icall_2_197(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

int godot_icall_2_198(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

MonoArray* godot_icall_2_199(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	PoolByteArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolByteArray_to_mono_array(ret);
}

MonoArray* godot_icall_2_200(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Array_to_mono_array(ret);
}

int godot_icall_2_201(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

MonoObject* godot_icall_2_202(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	AABB ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(AABB, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(AABB), ret_out);
}

void godot_icall_2_203(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(AABB, arg2, arg2_in);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_204(MethodBind* method, Object* ptr, RID* arg1) {
	AABB ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(AABB, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(AABB), ret_out);
}

void godot_icall_1_205(MethodBind* method, Object* ptr, RID* arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_206(MethodBind* method, Object* ptr, RID* arg1, bool arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_207(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2, int arg3) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Rect2, arg2, arg2_in);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_208(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_209(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_210(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Transform2D, arg3, arg3_in);
	const void* call_args[3] = { arg1, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_211(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Transform2D, arg2, arg2_in);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_212(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_213(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_2_214(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

void godot_icall_2_215(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_216(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg3, arg3_in);
	const void* call_args[3] = { arg1, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_217(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Color, arg2, arg2_in);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_218(MethodBind* method, Object* ptr, RID* arg1, bool arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Rect2, arg3, arg3_in);
	const void* call_args[3] = { arg1, &arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_6_219(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2, real_t* arg3, real_t* arg4, real_t arg5, bool arg6) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	MARSHALLED_IN(Vector2, arg3, arg3_in);
	MARSHALLED_IN(Color, arg4, arg4_in);
	double arg5_in = (double)arg5;
	const void* call_args[6] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_5_220(MethodBind* method, Object* ptr, RID* arg1, MonoArray* arg2, MonoArray* arg3, real_t arg4, bool arg5) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg2_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg2);
	PoolColorArray arg3_in = GDMonoMarshal::mono_array_to_PoolColorArray(arg3);
	double arg4_in = (double)arg4;
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_221(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Rect2, arg2, arg2_in);
	MARSHALLED_IN(Color, arg3, arg3_in);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_222(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2, real_t arg3, real_t* arg4) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	double arg3_in = (double)arg3;
	MARSHALLED_IN(Color, arg4, arg4_in);
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_7_223(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2, RID* arg3, bool arg4, real_t* arg5, bool arg6, RID* arg7) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Rect2, arg2, arg2_in);
	MARSHALLED_IN(Color, arg5, arg5_in);
	const void* call_args[7] = { arg1, &arg2_in, arg3, &arg4, &arg5_in, &arg6, arg7 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_8_224(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2, RID* arg3, real_t* arg4, real_t* arg5, bool arg6, RID* arg7, bool arg8) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Rect2, arg2, arg2_in);
	MARSHALLED_IN(Rect2, arg4, arg4_in);
	MARSHALLED_IN(Color, arg5, arg5_in);
	const void* call_args[8] = { arg1, &arg2_in, arg3, &arg4_in, &arg5_in, &arg6, arg7, &arg8 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_11_225(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2, real_t* arg3, RID* arg4, real_t* arg5, real_t* arg6, int arg7, int arg8, bool arg9, real_t* arg10, RID* arg11) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Rect2, arg2, arg2_in);
	MARSHALLED_IN(Rect2, arg3, arg3_in);
	MARSHALLED_IN(Vector2, arg5, arg5_in);
	MARSHALLED_IN(Vector2, arg6, arg6_in);
	MARSHALLED_IN(Color, arg10, arg10_in);
	const void* call_args[11] = { arg1, &arg2_in, &arg3_in, arg4, &arg5_in, &arg6_in, &arg7, &arg8, &arg9, &arg10_in, arg11 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_7_226(MethodBind* method, Object* ptr, RID* arg1, MonoArray* arg2, MonoArray* arg3, MonoArray* arg4, RID* arg5, real_t arg6, RID* arg7) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg2_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg2);
	PoolColorArray arg3_in = GDMonoMarshal::mono_array_to_PoolColorArray(arg3);
	PoolVector2Array arg4_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg4);
	double arg6_in = (double)arg6;
	const void* call_args[7] = { arg1, &arg2_in, &arg3_in, &arg4_in, arg5, &arg6_in, arg7 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_7_227(MethodBind* method, Object* ptr, RID* arg1, MonoArray* arg2, MonoArray* arg3, MonoArray* arg4, RID* arg5, RID* arg6, bool arg7) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg2_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg2);
	PoolColorArray arg3_in = GDMonoMarshal::mono_array_to_PoolColorArray(arg3);
	PoolVector2Array arg4_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg4);
	const void* call_args[7] = { arg1, &arg2_in, &arg3_in, &arg4_in, arg5, arg6, &arg7 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_8_228(MethodBind* method, Object* ptr, RID* arg1, MonoArray* arg2, MonoArray* arg3, MonoArray* arg4, MonoArray* arg5, RID* arg6, int arg7, RID* arg8) {
	ERR_FAIL_NULL(ptr);
	PoolIntArray arg2_in = GDMonoMarshal::mono_array_to_PoolIntArray(arg2);
	PoolVector2Array arg3_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg3);
	PoolColorArray arg4_in = GDMonoMarshal::mono_array_to_PoolColorArray(arg4);
	PoolVector2Array arg5_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg5);
	int64_t arg7_in = (int64_t)arg7;
	const void* call_args[8] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, arg6, &arg7_in, arg8 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_229(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, RID* arg3) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[3] = { arg1, arg2, arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_6_230(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, RID* arg3, RID* arg4, int arg5, int arg6) {
	ERR_FAIL_NULL(ptr);
	int64_t arg5_in = (int64_t)arg5;
	int64_t arg6_in = (int64_t)arg6;
	const void* call_args[6] = { arg1, arg2, arg3, arg4, &arg5_in, &arg6_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_231(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_232(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_233(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_234(MethodBind* method, Object* ptr, RID* arg1, MonoArray* arg2, bool arg3) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg2_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg2);
	const void* call_args[3] = { arg1, &arg2_in, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_235(MethodBind* method, Object* ptr, RID* arg1, MonoArray* arg2) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg2_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_236(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_237(MethodBind* method, Object* ptr, int arg1, int arg2, int arg3, int arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_238(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, RID* arg3, RID* arg4) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[4] = { arg1, arg2, arg3, arg4 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_1_239(MethodBind* method, Object* ptr, int arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

RID* godot_icall_3_240(MethodBind* method, Object* ptr, int arg1, int arg2, real_t arg3) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

void godot_icall_3_241(MethodBind* method, Object* ptr, Object* arg1, real_t* arg2, bool arg3) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Color, arg2, arg2_in);
	const void* call_args[3] = { arg1, &arg2_in, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_1_242(MethodBind* method, Object* ptr, int arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

Object* godot_icall_VisualServer_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("VisualServer");
}

void godot_icall_2_243(MethodBind* method, Object* ptr, MonoString* arg1, bool arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_244(MethodBind* method, Object* ptr, int arg1, bool arg2, MonoString* arg3, MonoString* arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	String arg4_in = GDMonoMarshal::mono_string_to_godot(arg4);
	const void* call_args[4] = { &arg1_in, &arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

real_t godot_icall_2_245(MethodBind* method, Object* ptr, int arg1, int arg2) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

void godot_icall_4_246(MethodBind* method, Object* ptr, int arg1, real_t arg2, real_t arg3, real_t arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	double arg4_in = (double)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_0_247(MethodBind* method, Object* ptr) {
	Vector3 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	MARSHALLED_OUT(Vector3, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector3), ret_out);
}

void godot_icall_1_248(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_249(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_3_250(MethodBind* method, Object* ptr, Object* arg1, int arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg3, arg3_in);
	const void* call_args[3] = { arg1, &arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_Input_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("Input");
}

void godot_icall_2_251(MethodBind* method, Object* ptr, int arg1, MonoString* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_252(MethodBind* method, Object* ptr, int arg1, Object* arg2, int arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_253(MethodBind* method, Object* ptr, int arg1, int arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_3_254(MethodBind* method, Object* ptr, int arg1, int arg2, int arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_255(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

MonoObject* godot_icall_0_256(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_AudioServer_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("AudioServer");
}

MonoObject* godot_icall_0_257(MethodBind* method, Object* ptr) {
	Transform ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	MARSHALLED_OUT(Transform, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Transform), ret_out);
}

void godot_icall_2_258(MethodBind* method, Object* ptr, int arg1, bool arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { &arg1, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_259(MethodBind* method, Object* ptr, int arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_1_260(MethodBind* method, Object* ptr, MonoString* arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_1_261(MethodBind* method, Object* ptr, int arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_ARVRServer_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("ARVRServer");
}

RID* godot_icall_1_262(MethodBind* method, Object* ptr, int arg1) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

void godot_icall_2_263(MethodBind* method, Object* ptr, RID* arg1, MonoObject* arg2) {
	ERR_FAIL_NULL(ptr);
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_1_264(MethodBind* method, Object* ptr, RID* arg1) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

MonoObject* godot_icall_1_265(MethodBind* method, Object* ptr, RID* arg1) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

bool godot_icall_1_266(MethodBind* method, Object* ptr, RID* arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_3_267(MethodBind* method, Object* ptr, RID* arg1, int arg2, real_t arg3) {
	ERR_FAIL_NULL(ptr);
	double arg3_in = (double)arg3;
	const void* call_args[3] = { arg1, &arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

real_t godot_icall_2_268(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

MonoObject* godot_icall_1_269(MethodBind* method, Object* ptr, RID* arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

void godot_icall_2_270(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_1_271(MethodBind* method, Object* ptr, RID* arg1) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_3_272(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Transform, arg3, arg3_in);
	const void* call_args[3] = { arg1, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_273(MethodBind* method, Object* ptr, RID* arg1, int arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	MARSHALLED_IN(Transform, arg3, arg3_in);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_274(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	Transform ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Transform, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Transform), ret_out);
}

void godot_icall_3_275(MethodBind* method, Object* ptr, RID* arg1, int arg2, MonoObject* arg3) {
	ERR_FAIL_NULL(ptr);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { arg1, &arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_276(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Transform, arg2, arg2_in);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_277(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

MonoObject* godot_icall_1_278(MethodBind* method, Object* ptr, RID* arg1) {
	Transform ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Transform, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Transform), ret_out);
}

void godot_icall_3_279(MethodBind* method, Object* ptr, RID* arg1, Object* arg2, MonoString* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { arg1, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

RID* godot_icall_2_280(MethodBind* method, Object* ptr, int arg1, bool arg2) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[2] = { &arg1, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

void godot_icall_2_281(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_1_282(MethodBind* method, Object* ptr, RID* arg1) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_3_283(MethodBind* method, Object* ptr, RID* arg1, int arg2, real_t arg3) {
	ERR_FAIL_NULL(ptr);
	double arg3_in = (double)arg3;
	const void* call_args[3] = { arg1, &arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

real_t godot_icall_2_284(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

real_t godot_icall_1_285(MethodBind* method, Object* ptr, RID* arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

void godot_icall_3_286(MethodBind* method, Object* ptr, RID* arg1, int arg2, MonoObject* arg3) {
	ERR_FAIL_NULL(ptr);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { arg1, &arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_287(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

void godot_icall_3_288(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector3, arg2, arg2_in);
	MARSHALLED_IN(Vector3, arg3, arg3_in);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_289(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector3, arg2, arg2_in);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_290(MethodBind* method, Object* ptr, RID* arg1, int arg2, bool arg3) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[3] = { arg1, &arg2, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_2_291(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_4_292(MethodBind* method, Object* ptr, RID* arg1, Object* arg2, MonoString* arg3, MonoObject* arg4) {
	ERR_FAIL_NULL(ptr);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	Variant arg4_in = GDMonoMarshal::mono_object_to_variant(arg4);
	const void* call_args[4] = { arg1, arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_293(MethodBind* method, Object* ptr, RID* arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

RID* godot_icall_4_294(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2, RID* arg3, real_t* arg4) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector3, arg2, arg2_in);
	MARSHALLED_IN(Vector3, arg4, arg4_in);
	const void* call_args[4] = { arg1, &arg2_in, arg3, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

void godot_icall_3_295(MethodBind* method, Object* ptr, RID* arg1, int arg2, real_t arg3) {
	ERR_FAIL_NULL(ptr);
	double arg3_in = (double)arg3;
	const void* call_args[3] = { arg1, &arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

real_t godot_icall_2_296(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

MonoObject* godot_icall_1_297(MethodBind* method, Object* ptr, RID* arg1) {
	Vector3 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector3, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector3), ret_out);
}

RID* godot_icall_4_298(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2, RID* arg3, real_t* arg4) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Transform, arg2, arg2_in);
	MARSHALLED_IN(Transform, arg4, arg4_in);
	const void* call_args[4] = { arg1, &arg2_in, arg3, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

void godot_icall_3_299(MethodBind* method, Object* ptr, RID* arg1, int arg2, real_t arg3) {
	ERR_FAIL_NULL(ptr);
	double arg3_in = (double)arg3;
	const void* call_args[3] = { arg1, &arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

real_t godot_icall_2_300(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

void godot_icall_3_301(MethodBind* method, Object* ptr, RID* arg1, int arg2, bool arg3) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[3] = { arg1, &arg2, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_2_302(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_3_303(MethodBind* method, Object* ptr, RID* arg1, int arg2, real_t arg3) {
	ERR_FAIL_NULL(ptr);
	double arg3_in = (double)arg3;
	const void* call_args[3] = { arg1, &arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

real_t godot_icall_2_304(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

void godot_icall_3_305(MethodBind* method, Object* ptr, RID* arg1, int arg2, real_t arg3) {
	ERR_FAIL_NULL(ptr);
	double arg3_in = (double)arg3;
	const void* call_args[3] = { arg1, &arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

real_t godot_icall_2_306(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

int godot_icall_1_307(MethodBind* method, Object* ptr, RID* arg1) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_4_308(MethodBind* method, Object* ptr, RID* arg1, int arg2, int arg3, real_t arg4) {
	ERR_FAIL_NULL(ptr);
	double arg4_in = (double)arg4;
	const void* call_args[4] = { arg1, &arg2, &arg3, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

real_t godot_icall_3_309(MethodBind* method, Object* ptr, RID* arg1, int arg2, int arg3) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	const void* call_args[3] = { arg1, &arg2, &arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

void godot_icall_4_310(MethodBind* method, Object* ptr, RID* arg1, int arg2, int arg3, bool arg4) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[4] = { arg1, &arg2, &arg3, &arg4 };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_3_311(MethodBind* method, Object* ptr, RID* arg1, int arg2, int arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	const void* call_args[3] = { arg1, &arg2, &arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

int godot_icall_1_312(MethodBind* method, Object* ptr, int arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

Object* godot_icall_PhysicsServer_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("PhysicsServer");
}

int godot_icall_1_313(MethodBind* method, Object* ptr, RID* arg1) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_3_314(MethodBind* method, Object* ptr, RID* arg1, int arg2, real_t arg3) {
	ERR_FAIL_NULL(ptr);
	double arg3_in = (double)arg3;
	const void* call_args[3] = { arg1, &arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

real_t godot_icall_2_315(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

MonoObject* godot_icall_1_316(MethodBind* method, Object* ptr, RID* arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

void godot_icall_2_317(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_1_318(MethodBind* method, Object* ptr, RID* arg1) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_3_319(MethodBind* method, Object* ptr, RID* arg1, int arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	MARSHALLED_IN(Transform2D, arg3, arg3_in);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_320(MethodBind* method, Object* ptr, RID* arg1, int arg2, bool arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[3] = { arg1, &arg2_in, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_321(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	Transform2D ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Transform2D, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Transform2D), ret_out);
}

void godot_icall_3_322(MethodBind* method, Object* ptr, RID* arg1, int arg2, MonoObject* arg3) {
	ERR_FAIL_NULL(ptr);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { arg1, &arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_323(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

MonoObject* godot_icall_1_324(MethodBind* method, Object* ptr, RID* arg1) {
	Transform2D ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Transform2D, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Transform2D), ret_out);
}

void godot_icall_2_325(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_1_326(MethodBind* method, Object* ptr, RID* arg1) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_3_327(MethodBind* method, Object* ptr, RID* arg1, int arg2, MonoObject* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_328(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

void godot_icall_2_329(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_1_330(MethodBind* method, Object* ptr, RID* arg1) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_3_331(MethodBind* method, Object* ptr, RID* arg1, int arg2, real_t arg3) {
	ERR_FAIL_NULL(ptr);
	double arg3_in = (double)arg3;
	const void* call_args[3] = { arg1, &arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

real_t godot_icall_2_332(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

void godot_icall_3_333(MethodBind* method, Object* ptr, RID* arg1, int arg2, MonoObject* arg3) {
	ERR_FAIL_NULL(ptr);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { arg1, &arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_334(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

void godot_icall_3_335(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	MARSHALLED_IN(Vector2, arg3, arg3_in);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_5_336(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2, real_t* arg3, real_t arg4, Object* arg5) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	MARSHALLED_IN(Transform2D, arg2, arg2_in);
	MARSHALLED_IN(Vector2, arg3, arg3_in);
	double arg4_in = (double)arg4;
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, arg5 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

MonoObject* godot_icall_1_337(MethodBind* method, Object* ptr, RID* arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

void godot_icall_3_338(MethodBind* method, Object* ptr, RID* arg1, int arg2, real_t arg3) {
	ERR_FAIL_NULL(ptr);
	double arg3_in = (double)arg3;
	const void* call_args[3] = { arg1, &arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

real_t godot_icall_2_339(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

RID* godot_icall_3_340(MethodBind* method, Object* ptr, real_t* arg1, RID* arg2, RID* arg3) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	const void* call_args[3] = { &arg1_in, arg2, arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

RID* godot_icall_5_341(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, real_t* arg3, RID* arg4, RID* arg5) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	MARSHALLED_IN(Vector2, arg3, arg3_in);
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, arg4, arg5 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

RID* godot_icall_4_342(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, RID* arg3, RID* arg4) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	const void* call_args[4] = { &arg1_in, &arg2_in, arg3, arg4 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

void godot_icall_3_343(MethodBind* method, Object* ptr, RID* arg1, int arg2, real_t arg3) {
	ERR_FAIL_NULL(ptr);
	double arg3_in = (double)arg3;
	const void* call_args[3] = { arg1, &arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

real_t godot_icall_2_344(MethodBind* method, Object* ptr, RID* arg1, int arg2) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

int godot_icall_1_345(MethodBind* method, Object* ptr, RID* arg1) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

int godot_icall_1_346(MethodBind* method, Object* ptr, int arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

Object* godot_icall_Physics2DServer_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("Physics2DServer");
}

int godot_icall_0_347(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

int godot_icall_0_348(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

MonoObject* godot_icall_0_349(MethodBind* method, Object* ptr) {
	Basis ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	MARSHALLED_OUT(Basis, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Basis), ret_out);
}

int godot_icall_0_350(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

MonoObject* godot_icall_1_351(MethodBind* method, Object* ptr, bool arg1) {
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

MonoObject* godot_icall_0_352(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_AudioStreamRandomPitch_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioStreamRandomPitch");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectEQ_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectEQ");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_353(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_354(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_AudioEffectFilter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectFilter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectAmplify_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectAmplify");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioBusLayout_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioBusLayout");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectReverb_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectReverb");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectLowPassFilter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectLowPassFilter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectHighPassFilter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectHighPassFilter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectBandPassFilter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectBandPassFilter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectNotchFilter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectNotchFilter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectBandLimitFilter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectBandLimitFilter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectLowShelfFilter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectLowShelfFilter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectHighShelfFilter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectHighShelfFilter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectEQ6_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectEQ6");
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

void godot_icall_1_355(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_356(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_AudioEffectDistortion_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectDistortion");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectStereoEnhance_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectStereoEnhance");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectPanner_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectPanner");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectChorus_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectChorus");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectDelay_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectDelay");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectCompressor_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectCompressor");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectLimiter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectLimiter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectPitchShift_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectPitchShift");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectPhaser_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectPhaser");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_357(MethodBind* method, Object* ptr, real_t* arg1) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Transform2D, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_0_358(MethodBind* method, Object* ptr) {
	Transform2D ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	MARSHALLED_OUT(Transform2D, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Transform2D), ret_out);
}

RID* godot_icall_1_359(MethodBind* method, Object* ptr, int arg1) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

MonoObject* godot_icall_1_360(MethodBind* method, Object* ptr, int arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_1_361(MethodBind* method, Object* ptr, int arg1) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

MonoObject* godot_icall_0_362(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoArray* godot_icall_4_363(MethodBind* method, Object* ptr, real_t* arg1, int arg2, MonoArray* arg3, int arg4) {
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

MonoObject* godot_icall_4_364(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, MonoArray* arg3, int arg4) {
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

MonoArray* godot_icall_2_365(MethodBind* method, Object* ptr, Object* arg1, int arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Array_to_mono_array(ret);
}

MonoArray* godot_icall_1_366(MethodBind* method, Object* ptr, Object* arg1) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Array_to_mono_array(ret);
}

MonoObject* godot_icall_1_367(MethodBind* method, Object* ptr, Object* arg1) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Dictionary_to_mono_object(ret);
}

MonoObject* godot_icall_0_368(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_Physics2DTestMotionResult_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Physics2DTestMotionResult");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_369(MethodBind* method, Object* ptr, MonoArray* arg1) {
	ERR_FAIL_NULL(ptr);
	Array arg1_in = GDMonoMarshal::mono_array_to_Array(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_Physics2DShapeQueryParameters_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Physics2DShapeQueryParameters");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_370(MethodBind* method, Object* ptr, real_t* arg1) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Transform, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_PhysicsShapeQueryParameters_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PhysicsShapeQueryParameters");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_371(MethodBind* method, Object* ptr, real_t* arg1) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector3, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_372(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector3, arg1, arg1_in);
	MARSHALLED_IN(Vector3, arg2, arg2_in);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_0_373(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_4_374(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, MonoArray* arg3, int arg4) {
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

MonoArray* godot_icall_2_375(MethodBind* method, Object* ptr, Object* arg1, real_t* arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector3, arg2, arg2_in);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Array_to_mono_array(ret);
}

void godot_icall_3_376(MethodBind* method, Object* ptr, Object* arg1, Object* arg2, bool arg3) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[3] = { arg1, arg2, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_377(MethodBind* method, Object* ptr, Object* arg1, bool arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_378(MethodBind* method, Object* ptr, int arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

bool godot_icall_1_379(MethodBind* method, Object* ptr, NodePath* arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

MonoObject* godot_icall_1_380(MethodBind* method, Object* ptr, NodePath* arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_3_381(MethodBind* method, Object* ptr, MonoString* arg1, bool arg2, bool arg3) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[3] = { &arg1_in, &arg2, &arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoArray* godot_icall_1_382(MethodBind* method, Object* ptr, NodePath* arg1) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Array_to_mono_array(ret);
}

NodePath* godot_icall_0_383(MethodBind* method, Object* ptr) {
	NodePath ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return memnew(NodePath(ret));
}

NodePath* godot_icall_1_384(MethodBind* method, Object* ptr, Object* arg1) {
	NodePath ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(NodePath(ret));
}

void godot_icall_2_385(MethodBind* method, Object* ptr, Object* arg1, int arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_386(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2, bool arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	Array arg2_in = GDMonoMarshal::mono_array_to_Array(arg2);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_387(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_388(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

MonoObject* godot_icall_0_389(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_0_390(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

void godot_icall_2_391(MethodBind* method, Object* ptr, MonoString* arg1, int arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_392(MethodBind* method, Object* ptr, NodePath* arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_3_393(MethodBind* method, Object* ptr, int arg1, MonoString* arg2, MonoArray* arg3) {
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

void godot_icall_3_394(MethodBind* method, Object* ptr, int arg1, MonoString* arg2, MonoObject* arg3) {
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

MonoObject* godot_icall_0_395(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_396(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_3_397(MethodBind* method, Object* ptr, bool arg1, real_t* arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	MARSHALLED_IN(Vector2, arg3, arg3_in);
	const void* call_args[3] = { &arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_398(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_399(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_400(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_401(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_402(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_403(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_404(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_405(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_406(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_407(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

int godot_icall_1_408(MethodBind* method, Object* ptr, int arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

MonoObject* godot_icall_0_409(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_410(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

void godot_icall_1_411(MethodBind* method, Object* ptr, real_t* arg1) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Rect2, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_412(MethodBind* method, Object* ptr, int arg1, int arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_1_413(MethodBind* method, Object* ptr, int arg1) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

Object* godot_icall_Viewport_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Viewport");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_414(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_World_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "World");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_5_415(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2, real_t* arg3, bool arg4, Object* arg5) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	MARSHALLED_IN(Color, arg3, arg3_in);
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4, arg5 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_6_416(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2, bool arg3, real_t* arg4, bool arg5, Object* arg6) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Rect2, arg2, arg2_in);
	MARSHALLED_IN(Color, arg4, arg4_in);
	const void* call_args[6] = { arg1, &arg2_in, &arg3, &arg4_in, &arg5, arg6 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_7_417(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2, real_t* arg3, real_t* arg4, bool arg5, Object* arg6, bool arg7) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Rect2, arg2, arg2_in);
	MARSHALLED_IN(Rect2, arg3, arg3_in);
	MARSHALLED_IN(Color, arg4, arg4_in);
	const void* call_args[7] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5, arg6, &arg7 };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_0_418(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_ViewportTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ViewportTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int godot_icall_5_419(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2, bool arg3, int arg4, MonoString* arg5) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	PoolStringArray arg2_in = GDMonoMarshal::mono_array_to_PoolStringArray(arg2);
	String arg5_in = GDMonoMarshal::mono_string_to_godot(arg5);
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3, &arg4, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

Object* godot_icall_HTTPRequest_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HTTPRequest");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_420(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_421(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_Timer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Timer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CanvasLayer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CanvasLayer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_422(MethodBind* method, Object* ptr) {
	Color ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	MARSHALLED_OUT(Color, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Color), ret_out);
}

void godot_icall_5_423(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, real_t* arg3, real_t arg4, bool arg5) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	MARSHALLED_IN(Color, arg3, arg3_in);
	double arg4_in = (double)arg4;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_424(MethodBind* method, Object* ptr, MonoArray* arg1, real_t* arg2, real_t arg3, bool arg4) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg1);
	MARSHALLED_IN(Color, arg2, arg2_in);
	double arg3_in = (double)arg3;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_425(MethodBind* method, Object* ptr, MonoArray* arg1, MonoArray* arg2, real_t arg3, bool arg4) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg1);
	PoolColorArray arg2_in = GDMonoMarshal::mono_array_to_PoolColorArray(arg2);
	double arg3_in = (double)arg3;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_426(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, bool arg3) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Rect2, arg1, arg1_in);
	MARSHALLED_IN(Color, arg2, arg2_in);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_427(MethodBind* method, Object* ptr, real_t* arg1, real_t arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	double arg2_in = (double)arg2;
	MARSHALLED_IN(Color, arg3, arg3_in);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_428(MethodBind* method, Object* ptr, Object* arg1, real_t* arg2, real_t* arg3, Object* arg4) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	MARSHALLED_IN(Color, arg3, arg3_in);
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, arg4 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_6_429(MethodBind* method, Object* ptr, Object* arg1, real_t* arg2, bool arg3, real_t* arg4, bool arg5, Object* arg6) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Rect2, arg2, arg2_in);
	MARSHALLED_IN(Color, arg4, arg4_in);
	const void* call_args[6] = { arg1, &arg2_in, &arg3, &arg4_in, &arg5, arg6 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_7_430(MethodBind* method, Object* ptr, Object* arg1, real_t* arg2, real_t* arg3, real_t* arg4, bool arg5, Object* arg6, bool arg7) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Rect2, arg2, arg2_in);
	MARSHALLED_IN(Rect2, arg3, arg3_in);
	MARSHALLED_IN(Color, arg4, arg4_in);
	const void* call_args[7] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5, arg6, &arg7 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_431(MethodBind* method, Object* ptr, Object* arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Rect2, arg2, arg2_in);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_6_432(MethodBind* method, Object* ptr, MonoArray* arg1, MonoArray* arg2, MonoArray* arg3, Object* arg4, real_t arg5, Object* arg6) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg1);
	PoolColorArray arg2_in = GDMonoMarshal::mono_array_to_PoolColorArray(arg2);
	PoolVector2Array arg3_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg3);
	double arg5_in = (double)arg5;
	const void* call_args[6] = { &arg1_in, &arg2_in, &arg3_in, arg4, &arg5_in, arg6 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_6_433(MethodBind* method, Object* ptr, MonoArray* arg1, MonoArray* arg2, MonoArray* arg3, Object* arg4, Object* arg5, bool arg6) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg1);
	PoolColorArray arg2_in = GDMonoMarshal::mono_array_to_PoolColorArray(arg2);
	PoolVector2Array arg3_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg3);
	const void* call_args[6] = { &arg1_in, &arg2_in, &arg3_in, arg4, arg5, &arg6 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_6_434(MethodBind* method, Object* ptr, MonoArray* arg1, real_t* arg2, MonoArray* arg3, Object* arg4, Object* arg5, bool arg6) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg1);
	MARSHALLED_IN(Color, arg2, arg2_in);
	PoolVector2Array arg3_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg3);
	const void* call_args[6] = { &arg1_in, &arg2_in, &arg3_in, arg4, arg5, &arg6 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_5_435(MethodBind* method, Object* ptr, Object* arg1, real_t* arg2, MonoString* arg3, real_t* arg4, int arg5) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	MARSHALLED_IN(Color, arg4, arg4_in);
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

real_t godot_icall_5_436(MethodBind* method, Object* ptr, Object* arg1, real_t* arg2, MonoString* arg3, MonoString* arg4, real_t* arg5) {
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

void godot_icall_3_437(MethodBind* method, Object* ptr, real_t* arg1, real_t arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	double arg2_in = (double)arg2;
	MARSHALLED_IN(Vector2, arg3, arg3_in);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_0_438(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_1_439(MethodBind* method, Object* ptr, real_t* arg1) {
	Vector2 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector2, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector2), ret_out);
}

MonoObject* godot_icall_1_440(MethodBind* method, Object* ptr, Object* arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_2_441(MethodBind* method, Object* ptr, real_t arg1, bool arg2) {
	ERR_FAIL_NULL(ptr);
	double arg1_in = (double)arg1;
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

real_t godot_icall_1_442(MethodBind* method, Object* ptr, real_t* arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

MonoObject* godot_icall_1_443(MethodBind* method, Object* ptr, Object* arg1) {
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

Object* godot_icall_CanvasModulate_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CanvasModulate");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_444(MethodBind* method, Object* ptr, MonoString* arg1) {
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

MonoObject* godot_icall_0_445(MethodBind* method, Object* ptr) {
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

void godot_icall_2_446(MethodBind* method, Object* ptr, int arg1, bool arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { &arg1, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_447(MethodBind* method, Object* ptr, int arg1, int arg2, int arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1, &arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_448(MethodBind* method, Object* ptr, int arg1, real_t arg2, bool arg3, bool arg4) {
	ERR_FAIL_NULL(ptr);
	double arg2_in = (double)arg2;
	const void* call_args[4] = { &arg1, &arg2_in, &arg3, &arg4 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_449(MethodBind* method, Object* ptr, int arg1, real_t arg2) {
	ERR_FAIL_NULL(ptr);
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

real_t godot_icall_1_450(MethodBind* method, Object* ptr, int arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

void godot_icall_4_451(MethodBind* method, Object* ptr, int arg1, real_t arg2, real_t arg3, bool arg4) {
	ERR_FAIL_NULL(ptr);
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	const void* call_args[4] = { &arg1, &arg2_in, &arg3_in, &arg4 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_452(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_453(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

MonoObject* godot_icall_0_454(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_0_455(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_2_456(MethodBind* method, Object* ptr, MonoString* arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	MARSHALLED_IN(Color, arg2, arg2_in);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_457(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_2_458(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_2_459(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_2_460(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2) {
	Color ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Color, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Color), ret_out);
}

void godot_icall_1_461(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_462(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

MonoString* godot_icall_1_463(MethodBind* method, Object* ptr, real_t* arg1) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

void godot_icall_1_464(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_465(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

int godot_icall_1_466(MethodBind* method, Object* ptr, real_t* arg1) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_2_467(MethodBind* method, Object* ptr, int arg1, NodePath* arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { &arg1, arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

NodePath* godot_icall_1_468(MethodBind* method, Object* ptr, int arg1) {
	NodePath ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(NodePath(ret));
}

void godot_icall_2_469(MethodBind* method, Object* ptr, MonoObject* arg1, Object* arg2) {
	ERR_FAIL_NULL(ptr);
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_470(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_471(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_Control_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Control");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_472(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, Object* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[3] = { &arg1_in, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_473(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	MARSHALLED_IN(Color, arg3, arg3_in);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_474(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, int arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_0_475(MethodBind* method, Object* ptr) {
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

void godot_icall_1_476(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_477(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

int godot_icall_0_478(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

MonoObject* godot_icall_0_479(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
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

Object* godot_icall_ShortCut_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ShortCut");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_482(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_1_483(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_484(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_Button_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Button");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_485(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_486(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_487(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_488(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_Label_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Label");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_HScrollBar_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HScrollBar");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VScrollBar_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VScrollBar");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ProgressBar_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ProgressBar");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_HSlider_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HSlider");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VSlider_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VSlider");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Popup_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Popup");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PopupPanel_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PopupPanel");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_489(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_MenuButton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MenuButton");
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

Object* godot_icall_ToolButton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ToolButton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_490(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_491(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_LinkButton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "LinkButton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Panel_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Panel");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_492(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_493(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_TextureRect_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TextureRect");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ColorRect_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ColorRect");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_494(MethodBind* method, Object* ptr, int arg1, int arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_1_495(MethodBind* method, Object* ptr, int arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

void godot_icall_1_496(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_497(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_NinePatchRect_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "NinePatchRect");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_498(MethodBind* method, Object* ptr, int arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

void godot_icall_1_499(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_500(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_2_501(MethodBind* method, Object* ptr, int arg1, Object* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_502(MethodBind* method, Object* ptr, int arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_503(MethodBind* method, Object* ptr) {
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

void godot_icall_1_504(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_505(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

MonoObject* godot_icall_1_506(MethodBind* method, Object* ptr, int arg1) {
	Rect2 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Rect2, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Rect2), ret_out);
}

void godot_icall_1_507(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_508(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_Tabs_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Tabs");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_HSeparator_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HSeparator");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VSeparator_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VSeparator");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_509(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_0_510(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int godot_icall_0_511(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_TextureButton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TextureButton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_512(MethodBind* method, Object* ptr, real_t* arg1, bool arg2) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_1_513(MethodBind* method, Object* ptr, real_t* arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_2_514(MethodBind* method, Object* ptr, real_t* arg1, bool arg2) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Rect2, arg1, arg1_in);
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_BitMap_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "BitMap");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_515(MethodBind* method, Object* ptr, Object* arg1, real_t* arg2) {
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

int godot_icall_0_516(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_517(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_HBoxContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HBoxContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VBoxContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VBoxContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_GridContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GridContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CenterContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CenterContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ScrollContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ScrollContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PanelContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PanelContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_518(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_519(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_VSplitContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VSplitContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_HSplitContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HSplitContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_9_520(MethodBind* method, Object* ptr, int arg1, bool arg2, int arg3, real_t* arg4, bool arg5, int arg6, real_t* arg7, Object* arg8, Object* arg9) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg3_in = (int64_t)arg3;
	MARSHALLED_IN(Color, arg4, arg4_in);
	int64_t arg6_in = (int64_t)arg6;
	MARSHALLED_IN(Color, arg7, arg7_in);
	const void* call_args[9] = { &arg1_in, &arg2, &arg3_in, &arg4_in, &arg5, &arg6_in, &arg7_in, arg8, arg9 };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_521(MethodBind* method, Object* ptr, int arg1) {
	Color ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Color, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Color), ret_out);
}

void godot_icall_1_522(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_523(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_GraphNode_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GraphNode");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int godot_icall_4_524(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, MonoString* arg3, int arg4) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

bool godot_icall_4_525(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, MonoString* arg3, int arg4) {
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

void godot_icall_4_526(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, MonoString* arg3, int arg4) {
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

Object* godot_icall_TextureProgress_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TextureProgress");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_527(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2, bool arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[3] = { &arg1_in, arg2, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_528(MethodBind* method, Object* ptr, Object* arg1, bool arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_529(MethodBind* method, Object* ptr, int arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	MARSHALLED_IN(Rect2, arg2, arg2_in);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_530(MethodBind* method, Object* ptr, int arg1, MonoObject* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_531(MethodBind* method, Object* ptr, int arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	MARSHALLED_IN(Color, arg2, arg2_in);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoArray* godot_icall_0_532(MethodBind* method, Object* ptr) {
	PoolIntArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoMarshal::PoolIntArray_to_mono_array(ret);
}

void godot_icall_1_533(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_534(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_535(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_536(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

int godot_icall_2_537(MethodBind* method, Object* ptr, real_t* arg1, bool arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

MonoObject* godot_icall_0_538(MethodBind* method, Object* ptr) {
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

MonoObject* godot_icall_0_539(MethodBind* method, Object* ptr) {
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

MonoObject* godot_icall_0_540(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_0_541(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_3_542(MethodBind* method, Object* ptr, MonoString* arg1, bool arg2, MonoString* arg3) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { &arg1_in, &arg2, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_1_543(MethodBind* method, Object* ptr, MonoString* arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_AcceptDialog_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AcceptDialog");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ConfirmationDialog_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ConfirmationDialog");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_544(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_545(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

MonoObject* godot_icall_0_546(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

void godot_icall_1_547(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_548(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_FileDialog_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "FileDialog");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_549(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_550(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_LineEdit_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "LineEdit");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_4_551(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, int arg3, int arg4) {
	ERR_FAIL_NULL(ptr);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_552(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, int arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_553(MethodBind* method, Object* ptr, Object* arg1, Object* arg2, int arg3, bool arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[4] = { arg1, arg2, &arg3_in, &arg4 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_554(MethodBind* method, Object* ptr, Object* arg1, int arg2, bool arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[3] = { arg1, &arg2_in, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_555(MethodBind* method, Object* ptr, int arg1, Object* arg2, bool arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[3] = { &arg1_in, arg2, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_556(MethodBind* method, Object* ptr, int arg1) {
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

MonoObject* godot_icall_2_557(MethodBind* method, Object* ptr, Object* arg1, int arg2) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_0_558(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_1_559(MethodBind* method, Object* ptr, Object* arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

void godot_icall_1_560(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_561(MethodBind* method, Object* ptr, Object* arg1, int arg2) {
	Rect2 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Rect2, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Rect2), ret_out);
}

MonoObject* godot_icall_1_562(MethodBind* method, Object* ptr, real_t* arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

int godot_icall_1_563(MethodBind* method, Object* ptr, real_t* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

Object* godot_icall_Tree_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Tree");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_564(MethodBind* method, Object* ptr, int arg1, bool arg2, bool arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[3] = { &arg1_in, &arg2, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

MonoArray* godot_icall_4_565(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, int arg3, int arg4) {
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

void godot_icall_4_566(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, real_t* arg3, bool arg4) {
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

void godot_icall_2_567(MethodBind* method, Object* ptr, int arg1, int arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_1_568(MethodBind* method, Object* ptr, int arg1) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_5_569(MethodBind* method, Object* ptr, int arg1, real_t arg2, real_t arg3, real_t arg4, bool arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	double arg4_in = (double)arg4;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_570(MethodBind* method, Object* ptr, int arg1, Object* arg2, MonoString* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_571(MethodBind* method, Object* ptr, int arg1, real_t* arg2, bool arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	MARSHALLED_IN(Color, arg2, arg2_in);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_5_572(MethodBind* method, Object* ptr, int arg1, Object* arg2, int arg3, bool arg4, MonoString* arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg3_in = (int64_t)arg3;
	String arg5_in = GDMonoMarshal::mono_string_to_godot(arg5);
	const void* call_args[5] = { &arg1_in, arg2, &arg3_in, &arg4, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_573(MethodBind* method, Object* ptr, int arg1, int arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_3_574(MethodBind* method, Object* ptr, int arg1, int arg2, Object* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[3] = { &arg1_in, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_575(MethodBind* method, Object* ptr, int arg1, int arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_1_576(MethodBind* method, Object* ptr, int arg1) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_3_577(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, int arg3) {
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

MonoObject* godot_icall_0_578(MethodBind* method, Object* ptr) {
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

Object* godot_icall_ReferenceRect_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ReferenceRect");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ColorPicker_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ColorPicker");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_579(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_0_580(MethodBind* method, Object* ptr) {
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

void godot_icall_1_581(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_582(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_583(MethodBind* method, Object* ptr, int arg1, bool arg2, int arg3) {
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

MonoObject* godot_icall_0_584(MethodBind* method, Object* ptr) {
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

Object* godot_icall_PopupDialog_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PopupDialog");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_MarginContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MarginContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ViewportContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ViewportContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_585(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_0_586(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_2_587(MethodBind* method, Object* ptr, real_t* arg1, real_t arg2) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector3, arg1, arg1_in);
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_588(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, real_t* arg3) {
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

MonoObject* godot_icall_1_589(MethodBind* method, Object* ptr, int arg1) {
	Transform ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Transform, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Transform), ret_out);
}

void godot_icall_2_590(MethodBind* method, Object* ptr, int arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	MARSHALLED_IN(Transform, arg2, arg2_in);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_591(MethodBind* method, Object* ptr, int arg1, Object* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_Skeleton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Skeleton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int godot_icall_2_592(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

MonoObject* godot_icall_1_593(MethodBind* method, Object* ptr, MonoString* arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_3_594(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, real_t arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

real_t godot_icall_2_595(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

void godot_icall_4_596(MethodBind* method, Object* ptr, MonoString* arg1, real_t arg2, real_t arg3, bool arg4) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_597(MethodBind* method, Object* ptr, MonoString* arg1, real_t arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoString* godot_icall_1_598(MethodBind* method, Object* ptr, Object* arg1) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

void godot_icall_1_599(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_600(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_AnimationPlayer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationPlayer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_601(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_602(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

bool godot_icall_2_603(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

bool godot_icall_8_604(MethodBind* method, Object* ptr, Object* arg1, NodePath* arg2, MonoObject* arg3, MonoObject* arg4, real_t arg5, int arg6, int arg7, real_t arg8) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	Variant arg4_in = GDMonoMarshal::mono_object_to_variant(arg4);
	double arg5_in = (double)arg5;
	double arg8_in = (double)arg8;
	const void* call_args[8] = { arg1, arg2, &arg3_in, &arg4_in, &arg5_in, &arg6, &arg7, &arg8_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

bool godot_icall_8_605(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, MonoObject* arg3, MonoObject* arg4, real_t arg5, int arg6, int arg7, real_t arg8) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	Variant arg4_in = GDMonoMarshal::mono_object_to_variant(arg4);
	double arg5_in = (double)arg5;
	double arg8_in = (double)arg8;
	const void* call_args[8] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6, &arg7, &arg8_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

bool godot_icall_8_606(MethodBind* method, Object* ptr, Object* arg1, real_t arg2, MonoString* arg3, MonoObject* arg4, MonoObject* arg5, MonoObject* arg6, MonoObject* arg7, MonoObject* arg8) {
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

bool godot_icall_9_607(MethodBind* method, Object* ptr, Object* arg1, NodePath* arg2, MonoObject* arg3, Object* arg4, NodePath* arg5, real_t arg6, int arg7, int arg8, real_t arg9) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	double arg6_in = (double)arg6;
	double arg9_in = (double)arg9;
	const void* call_args[9] = { arg1, arg2, &arg3_in, arg4, arg5, &arg6_in, &arg7, &arg8, &arg9_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

bool godot_icall_9_608(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, MonoObject* arg3, Object* arg4, MonoString* arg5, real_t arg6, int arg7, int arg8, real_t arg9) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	String arg5_in = GDMonoMarshal::mono_string_to_godot(arg5);
	double arg6_in = (double)arg6;
	double arg9_in = (double)arg9;
	const void* call_args[9] = { arg1, &arg2_in, &arg3_in, arg4, &arg5_in, &arg6_in, &arg7, &arg8, &arg9_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

bool godot_icall_9_609(MethodBind* method, Object* ptr, Object* arg1, NodePath* arg2, Object* arg3, NodePath* arg4, MonoObject* arg5, real_t arg6, int arg7, int arg8, real_t arg9) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	Variant arg5_in = GDMonoMarshal::mono_object_to_variant(arg5);
	double arg6_in = (double)arg6;
	double arg9_in = (double)arg9;
	const void* call_args[9] = { arg1, arg2, arg3, arg4, &arg5_in, &arg6_in, &arg7, &arg8, &arg9_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

bool godot_icall_9_610(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, Object* arg3, MonoString* arg4, MonoObject* arg5, real_t arg6, int arg7, int arg8, real_t arg9) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	String arg4_in = GDMonoMarshal::mono_string_to_godot(arg4);
	Variant arg5_in = GDMonoMarshal::mono_object_to_variant(arg5);
	double arg6_in = (double)arg6;
	double arg9_in = (double)arg9;
	const void* call_args[9] = { arg1, &arg2_in, arg3, &arg4_in, &arg5_in, &arg6_in, &arg7, &arg8, &arg9_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

Object* godot_icall_Tween_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Tween");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_BoneAttachment_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "BoneAttachment");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_611(MethodBind* method, Object* ptr) {
	AABB ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	MARSHALLED_OUT(AABB, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(AABB), ret_out);
}

void godot_icall_2_612(MethodBind* method, Object* ptr, int arg1, bool arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { &arg1, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_1_613(MethodBind* method, Object* ptr, int arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_1_614(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_615(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

MonoObject* godot_icall_1_616(MethodBind* method, Object* ptr, real_t* arg1) {
	Vector3 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector3, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector3), ret_out);
}

MonoObject* godot_icall_1_617(MethodBind* method, Object* ptr, real_t* arg1) {
	Vector2 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector3, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector2, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector2), ret_out);
}

bool godot_icall_1_618(MethodBind* method, Object* ptr, real_t* arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	MARSHALLED_IN(Vector3, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_3_619(MethodBind* method, Object* ptr, real_t arg1, real_t arg2, real_t arg3) {
	ERR_FAIL_NULL(ptr);
	double arg1_in = (double)arg1;
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_620(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_621(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_622(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_623(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_624(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_625(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_Camera_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Camera");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_626(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_627(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

MonoObject* godot_icall_0_628(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_1_629(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_630(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_631(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_632(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_633(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_634(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_635(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_636(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_637(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_638(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_Environment_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Environment");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Listener_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Listener");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ARVRCamera_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ARVRCamera");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ARVRController_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ARVRController");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_639(MethodBind* method, Object* ptr) {
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

Object* godot_icall_ARVROrigin_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ARVROrigin");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_InterpolatedCamera_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InterpolatedCamera");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_640(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_1_641(MethodBind* method, Object* ptr, int arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_MeshInstance_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MeshInstance");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_642(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_1_643(MethodBind* method, Object* ptr, real_t arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	double arg1_in = (double)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoArray* godot_icall_0_644(MethodBind* method, Object* ptr) {
	PoolVector3Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoMarshal::PoolVector3Array_to_mono_array(ret);
}

MonoObject* godot_icall_0_645(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_2_646(MethodBind* method, Object* ptr, int arg1, Object* arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { &arg1, arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_647(MethodBind* method, Object* ptr, real_t* arg1) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Plane, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_648(MethodBind* method, Object* ptr, int arg1, int arg2, real_t arg3, bool arg4) {
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

void godot_icall_1_649(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_650(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_2_651(MethodBind* method, Object* ptr, int arg1, bool arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { &arg1, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_1_652(MethodBind* method, Object* ptr, int arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_1_653(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_654(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_Sprite3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Sprite3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_655(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_AnimatedSprite3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimatedSprite3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

real_t godot_icall_1_656(MethodBind* method, Object* ptr, MonoString* arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

void godot_icall_3_657(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2, int arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_658(MethodBind* method, Object* ptr, MonoString* arg1, int arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_3_659(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, Object* arg3) {
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

void godot_icall_2_660(MethodBind* method, Object* ptr, int arg1, real_t arg2) {
	ERR_FAIL_NULL(ptr);
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

real_t godot_icall_1_661(MethodBind* method, Object* ptr, int arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

void godot_icall_1_662(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_663(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_664(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_665(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_666(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_667(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_DirectionalLight_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "DirectionalLight");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_668(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_669(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_670(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_671(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_OmniLight_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "OmniLight");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SpotLight_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SpotLight");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_672(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_673(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_ReflectionProbe_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ReflectionProbe");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_674(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_1_675(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_676(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_GIProbe_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GIProbe");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_677(MethodBind* method, Object* ptr, real_t* arg1) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(AABB, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_678(MethodBind* method, Object* ptr, MonoArray* arg1) {
	ERR_FAIL_NULL(ptr);
	PoolIntArray arg1_in = GDMonoMarshal::mono_array_to_PoolIntArray(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_GIProbeData_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GIProbeData");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_679(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_1_680(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_681(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_682(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_683(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

int godot_icall_2_684(MethodBind* method, Object* ptr, Object* arg1, bool arg2) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

Object* godot_icall_BakedLightmap_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "BakedLightmap");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_685(MethodBind* method, Object* ptr, NodePath* arg1, Object* arg2, int arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

NodePath* godot_icall_1_686(MethodBind* method, Object* ptr, int arg1) {
	NodePath ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(NodePath(ret));
}

Object* godot_icall_BakedLightmapData_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "BakedLightmapData");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_687(MethodBind* method, Object* ptr, int arg1, MonoString* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_1_688(MethodBind* method, Object* ptr, MonoString* arg1) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

MonoString* godot_icall_2_689(MethodBind* method, Object* ptr, MonoString* arg1, int arg2) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

void godot_icall_3_690(MethodBind* method, Object* ptr, MonoString* arg1, NodePath* arg2, bool arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[3] = { &arg1_in, arg2, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_691(MethodBind* method, Object* ptr, MonoString* arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_692(MethodBind* method, Object* ptr, MonoString* arg1) {
	Vector2 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector2, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector2), ret_out);
}

void godot_icall_3_693(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, bool arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_2_694(MethodBind* method, Object* ptr, MonoString* arg1, int arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

int godot_icall_3_695(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, int arg3) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

bool godot_icall_3_696(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, int arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_1_697(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_698(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_AnimationTreePlayer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationTreePlayer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_699(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_700(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

MonoObject* godot_icall_1_701(MethodBind* method, Object* ptr, int arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_Particles_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Particles");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Position3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Position3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_702(MethodBind* method, Object* ptr) {
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

void godot_icall_1_703(MethodBind* method, Object* ptr, MonoArray* arg1) {
	ERR_FAIL_NULL(ptr);
	PoolVector3Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector3Array(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_NavigationMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "NavigationMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int godot_icall_3_704(MethodBind* method, Object* ptr, Object* arg1, real_t* arg2, Object* arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	MARSHALLED_IN(Transform, arg2, arg2_in);
	const void* call_args[3] = { arg1, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

MonoArray* godot_icall_3_705(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, bool arg3) {
	PoolVector3Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector3, arg1, arg1_in);
	MARSHALLED_IN(Vector3, arg2, arg2_in);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolVector3Array_to_mono_array(ret);
}

MonoObject* godot_icall_3_706(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, bool arg3) {
	Vector3 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector3, arg1, arg1_in);
	MARSHALLED_IN(Vector3, arg2, arg2_in);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3 };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector3, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector3), ret_out);
}

MonoObject* godot_icall_1_707(MethodBind* method, Object* ptr, real_t* arg1) {
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

int godot_icall_1_708(MethodBind* method, Object* ptr, Object* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

MonoObject* godot_icall_2_709(MethodBind* method, Object* ptr, int arg1, int arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int godot_icall_2_710(MethodBind* method, Object* ptr, int arg1, int arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

Object* godot_icall_StaticBody_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StaticBody");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_711(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_712(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_2_713(MethodBind* method, Object* ptr, int arg1, bool arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { &arg1, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_1_714(MethodBind* method, Object* ptr, int arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

Object* godot_icall_RigidBody_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RigidBody");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_KinematicCollision_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "KinematicCollision");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_715(MethodBind* method, Object* ptr, real_t* arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector3, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_5_716(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, real_t arg3, int arg4, real_t arg5) {
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

bool godot_icall_2_717(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	MARSHALLED_IN(Transform, arg1, arg1_in);
	MARSHALLED_IN(Vector3, arg2, arg2_in);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

MonoObject* godot_icall_1_718(MethodBind* method, Object* ptr, int arg1) {
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

void godot_icall_1_719(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_720(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_Area_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Area");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ProximityGroup_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ProximityGroup");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CollisionShape_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CollisionShape");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_721(MethodBind* method, Object* ptr, MonoArray* arg1) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoArray* godot_icall_0_722(MethodBind* method, Object* ptr) {
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

Object* godot_icall_RayCast_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RayCast");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_723(MethodBind* method, Object* ptr) {
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

void godot_icall_1_724(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_725(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_726(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_727(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_728(MethodBind* method, Object* ptr, MonoArray* arg1) {
	ERR_FAIL_NULL(ptr);
	PoolColorArray arg1_in = GDMonoMarshal::mono_array_to_PoolColorArray(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoArray* godot_icall_0_729(MethodBind* method, Object* ptr) {
	PoolColorArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoMarshal::PoolColorArray_to_mono_array(ret);
}

Object* godot_icall_MultiMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MultiMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_4_730(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, real_t* arg3, int arg4) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector3, arg1, arg1_in);
	MARSHALLED_IN(Vector3, arg2, arg2_in);
	MARSHALLED_IN(Vector3, arg3, arg3_in);
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_731(MethodBind* method, Object* ptr, int arg1, real_t arg2) {
	Vector3 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector3, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector3), ret_out);
}

MonoObject* godot_icall_1_732(MethodBind* method, Object* ptr, real_t arg1) {
	Vector3 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	double arg1_in = (double)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector3, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector3), ret_out);
}

MonoObject* godot_icall_2_733(MethodBind* method, Object* ptr, real_t arg1, bool arg2) {
	Vector3 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	double arg1_in = (double)arg1;
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector3, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector3), ret_out);
}

MonoArray* godot_icall_0_734(MethodBind* method, Object* ptr) {
	PoolRealArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoMarshal::PoolRealArray_to_mono_array(ret);
}

MonoArray* godot_icall_2_735(MethodBind* method, Object* ptr, int arg1, real_t arg2) {
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

MonoObject* godot_icall_0_736(MethodBind* method, Object* ptr) {
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

void godot_icall_1_737(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_738(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_PathFollow_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PathFollow");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisibilityNotifier_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisibilityNotifier");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_739(MethodBind* method, Object* ptr, int arg1, bool arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { &arg1, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_1_740(MethodBind* method, Object* ptr, int arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

Object* godot_icall_VisibilityEnabler_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisibilityEnabler");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_WorldEnvironment_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "WorldEnvironment");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_RemoteTransform_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RemoteTransform");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_741(MethodBind* method, Object* ptr, int arg1, real_t arg2) {
	ERR_FAIL_NULL(ptr);
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

real_t godot_icall_1_742(MethodBind* method, Object* ptr, int arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

Object* godot_icall_PinJoint_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PinJoint");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_743(MethodBind* method, Object* ptr, int arg1, real_t arg2) {
	ERR_FAIL_NULL(ptr);
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

real_t godot_icall_1_744(MethodBind* method, Object* ptr, int arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

void godot_icall_2_745(MethodBind* method, Object* ptr, int arg1, bool arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { &arg1, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_1_746(MethodBind* method, Object* ptr, int arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

Object* godot_icall_HingeJoint_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HingeJoint");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_747(MethodBind* method, Object* ptr, int arg1, real_t arg2) {
	ERR_FAIL_NULL(ptr);
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

real_t godot_icall_1_748(MethodBind* method, Object* ptr, int arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

Object* godot_icall_SliderJoint_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SliderJoint");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_749(MethodBind* method, Object* ptr, int arg1, real_t arg2) {
	ERR_FAIL_NULL(ptr);
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

real_t godot_icall_1_750(MethodBind* method, Object* ptr, int arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

Object* godot_icall_ConeTwistJoint_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ConeTwistJoint");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_751(MethodBind* method, Object* ptr, int arg1, real_t arg2) {
	ERR_FAIL_NULL(ptr);
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

real_t godot_icall_1_752(MethodBind* method, Object* ptr, int arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

void godot_icall_2_753(MethodBind* method, Object* ptr, int arg1, bool arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { &arg1, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_1_754(MethodBind* method, Object* ptr, int arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

Object* godot_icall_Generic6DOFJoint_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Generic6DOFJoint");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_755(MethodBind* method, Object* ptr, int arg1, MonoArray* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Array arg2_in = GDMonoMarshal::mono_array_to_Array(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_756(MethodBind* method, Object* ptr, int arg1) {
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

int godot_icall_0_757(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

MonoObject* godot_icall_1_758(MethodBind* method, Object* ptr, MonoString* arg1) {
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

MonoObject* godot_icall_0_759(MethodBind* method, Object* ptr) {
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

void godot_icall_1_760(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_761(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_762(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_763(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_CanvasItemMaterial_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CanvasItemMaterial");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_764(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_765(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_Particles2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Particles2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Sprite_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Sprite");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AnimatedSprite_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimatedSprite");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Position2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Position2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_766(MethodBind* method, Object* ptr, int arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_0_767(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_1_768(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_769(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_770(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_771(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_772(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_773(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_Line2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Line2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_774(MethodBind* method, Object* ptr, real_t arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	double arg1_in = (double)arg1;
	MARSHALLED_IN(Color, arg2, arg2_in);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_775(MethodBind* method, Object* ptr, real_t arg1) {
	Color ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	double arg1_in = (double)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Color, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Color), ret_out);
}

void godot_icall_1_776(MethodBind* method, Object* ptr, MonoArray* arg1) {
	ERR_FAIL_NULL(ptr);
	PoolRealArray arg1_in = GDMonoMarshal::mono_array_to_PoolRealArray(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_Gradient_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Gradient");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_777(MethodBind* method, Object* ptr, int arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	MARSHALLED_IN(Transform2D, arg2, arg2_in);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_778(MethodBind* method, Object* ptr, int arg1) {
	Transform2D ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Transform2D, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Transform2D), ret_out);
}

MonoObject* godot_icall_2_779(MethodBind* method, Object* ptr, int arg1, int arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_StaticBody2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StaticBody2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_780(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_781(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_782(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_783(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_2_784(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_3_785(MethodBind* method, Object* ptr, real_t* arg1, real_t arg2, Object* arg3) {
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

MonoObject* godot_icall_1_786(MethodBind* method, Object* ptr, real_t* arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_5_787(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, real_t arg3, int arg4, real_t arg5) {
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

bool godot_icall_2_788(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	MARSHALLED_IN(Transform2D, arg1, arg1_in);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

MonoObject* godot_icall_1_789(MethodBind* method, Object* ptr, int arg1) {
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

Object* godot_icall_KinematicCollision2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "KinematicCollision2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_790(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_791(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_Area2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Area2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_792(MethodBind* method, Object* ptr) {
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

bool godot_icall_3_793(MethodBind* method, Object* ptr, real_t* arg1, Object* arg2, real_t* arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	MARSHALLED_IN(Transform2D, arg1, arg1_in);
	MARSHALLED_IN(Transform2D, arg3, arg3_in);
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

bool godot_icall_5_794(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, Object* arg3, real_t* arg4, real_t* arg5) {
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

MonoObject* godot_icall_3_795(MethodBind* method, Object* ptr, real_t* arg1, Object* arg2, real_t* arg3) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Transform2D, arg1, arg1_in);
	MARSHALLED_IN(Transform2D, arg3, arg3_in);
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

MonoObject* godot_icall_5_796(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, Object* arg3, real_t* arg4, real_t* arg5) {
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

void godot_icall_1_797(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_798(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_CollisionPolygon2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CollisionPolygon2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_RayCast2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RayCast2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisibilityNotifier2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisibilityNotifier2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_799(MethodBind* method, Object* ptr, int arg1, bool arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { &arg1, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_1_800(MethodBind* method, Object* ptr, int arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

Object* godot_icall_VisibilityEnabler2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisibilityEnabler2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Polygon2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Polygon2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_801(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_802(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_803(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_804(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_Light2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Light2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_805(MethodBind* method, Object* ptr) {
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

void godot_icall_1_806(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_807(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_OccluderPolygon2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "OccluderPolygon2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_YSort_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "YSort");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_808(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_809(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_BackBufferCopy_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "BackBufferCopy");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_810(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_811(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_Camera2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Camera2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PinJoint2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PinJoint2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_GrooveJoint2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GrooveJoint2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_DampedSpringJoint2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "DampedSpringJoint2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_812(MethodBind* method, Object* ptr, int arg1, int arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_1_813(MethodBind* method, Object* ptr, int arg1) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

MonoObject* godot_icall_1_814(MethodBind* method, Object* ptr, int arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_3_815(MethodBind* method, Object* ptr, int arg1, int arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	MARSHALLED_IN(Transform2D, arg3, arg3_in);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_816(MethodBind* method, Object* ptr, int arg1, int arg2) {
	Transform2D ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Transform2D, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Transform2D), ret_out);
}

void godot_icall_5_817(MethodBind* method, Object* ptr, int arg1, Object* arg2, real_t* arg3, bool arg4, real_t* arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	MARSHALLED_IN(Transform2D, arg3, arg3_in);
	MARSHALLED_IN(Vector2, arg5, arg5_in);
	const void* call_args[5] = { &arg1_in, arg2, &arg3_in, &arg4, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_818(MethodBind* method, Object* ptr, int arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_1_819(MethodBind* method, Object* ptr, int arg1) {
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

MonoObject* godot_icall_0_820(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_1_821(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_822(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_823(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_824(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_825(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_826(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_7_827(MethodBind* method, Object* ptr, int arg1, int arg2, int arg3, bool arg4, bool arg5, bool arg6, real_t* arg7) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	MARSHALLED_IN(Vector2, arg7, arg7_in);
	const void* call_args[7] = { &arg1_in, &arg2_in, &arg3_in, &arg4, &arg5, &arg6, &arg7_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_5_828(MethodBind* method, Object* ptr, real_t* arg1, int arg2, bool arg3, bool arg4, bool arg5) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3, &arg4, &arg5 };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_829(MethodBind* method, Object* ptr, real_t* arg1, bool arg2) {
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

void godot_icall_1_830(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_831(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_TouchScreenButton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TouchScreenButton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_RemoteTransform2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RemoteTransform2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_832(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_833(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_4_834(MethodBind* method, Object* ptr, int arg1, MonoArray* arg2, MonoArray* arg3, int arg4) {
	ERR_FAIL_NULL(ptr);
	Array arg2_in = GDMonoMarshal::mono_array_to_Array(arg2);
	Array arg3_in = GDMonoMarshal::mono_array_to_Array(arg3);
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_835(MethodBind* method, Object* ptr, int arg1, int arg2, MonoArray* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	PoolByteArray arg3_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_1_836(MethodBind* method, Object* ptr, int arg1) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

Object* godot_icall_ArrayMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ArrayMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CapsuleMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CapsuleMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CubeMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CubeMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CylinderMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CylinderMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PlaneMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PlaneMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PrismMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PrismMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_QuadMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "QuadMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SphereMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SphereMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_837(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_838(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_839(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_840(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_841(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_842(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_843(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_844(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_845(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_846(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_847(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_848(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_2_849(MethodBind* method, Object* ptr, int arg1, bool arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { &arg1, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_1_850(MethodBind* method, Object* ptr, int arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_2_851(MethodBind* method, Object* ptr, int arg1, bool arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { &arg1, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_1_852(MethodBind* method, Object* ptr, int arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_2_853(MethodBind* method, Object* ptr, int arg1, Object* arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { &arg1, arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_854(MethodBind* method, Object* ptr, int arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_1_855(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_856(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_857(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_858(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_859(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_860(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_SpatialMaterial_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SpatialMaterial");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_861(MethodBind* method, Object* ptr, int arg1, real_t arg2) {
	ERR_FAIL_NULL(ptr);
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

real_t godot_icall_1_862(MethodBind* method, Object* ptr, int arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

void godot_icall_2_863(MethodBind* method, Object* ptr, int arg1, Object* arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { &arg1, arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_864(MethodBind* method, Object* ptr, int arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_2_865(MethodBind* method, Object* ptr, int arg1, bool arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { &arg1, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_1_866(MethodBind* method, Object* ptr, int arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_1_867(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_868(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

MonoObject* godot_icall_0_869(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_870(MethodBind* method, Object* ptr) {
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

MonoObject* godot_icall_0_871(MethodBind* method, Object* ptr) {
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

Object* godot_icall_GradientTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GradientTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_RayShape_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RayShape");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SphereShape_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SphereShape");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_BoxShape_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "BoxShape");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CapsuleShape_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CapsuleShape");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PlaneShape_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PlaneShape");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ConvexPolygonShape_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ConvexPolygonShape");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ConcavePolygonShape_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ConcavePolygonShape");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_872(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_6_873(MethodBind* method, Object* ptr, MonoArray* arg1, MonoArray* arg2, MonoArray* arg3, MonoArray* arg4, MonoArray* arg5, MonoArray* arg6) {
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

void godot_icall_2_874(MethodBind* method, Object* ptr, Object* arg1, int arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_875(MethodBind* method, Object* ptr, Object* arg1, int arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	MARSHALLED_IN(Transform, arg3, arg3_in);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_876(MethodBind* method, Object* ptr, Object* arg1, int arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_SurfaceTool_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SurfaceTool");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int godot_icall_2_877(MethodBind* method, Object* ptr, Object* arg1, int arg2) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_2_878(MethodBind* method, Object* ptr, int arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	MARSHALLED_IN(Plane, arg2, arg2_in);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_879(MethodBind* method, Object* ptr, int arg1) {
	Plane ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Plane, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Plane), ret_out);
}

void godot_icall_2_880(MethodBind* method, Object* ptr, int arg1, MonoArray* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	PoolIntArray arg2_in = GDMonoMarshal::mono_array_to_PoolIntArray(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_881(MethodBind* method, Object* ptr, int arg1, MonoArray* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	PoolRealArray arg2_in = GDMonoMarshal::mono_array_to_PoolRealArray(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoArray* godot_icall_1_882(MethodBind* method, Object* ptr, int arg1) {
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

Object* godot_icall_SpatialVelocityTracker_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SpatialVelocityTracker");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_883(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_884(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_World2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "World2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PanoramaSky_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PanoramaSky");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_885(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_886(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_ProceduralSky_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ProceduralSky");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_StreamTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StreamTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_4_887(MethodBind* method, Object* ptr, int arg1, int arg2, int arg3, int arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_888(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_889(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_ImageTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ImageTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AtlasTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AtlasTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int godot_icall_2_890(MethodBind* method, Object* ptr, real_t* arg1, Object* arg2) {
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

int godot_icall_5_891(MethodBind* method, Object* ptr, real_t* arg1, real_t arg2, real_t arg3, int arg4, int arg5) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4, &arg5 };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

int godot_icall_2_892(MethodBind* method, Object* ptr, int arg1, real_t arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

real_t godot_icall_1_893(MethodBind* method, Object* ptr, real_t arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, real_t());
	double arg1_in = (double)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (real_t)ret;
}

int godot_icall_1_894(MethodBind* method, Object* ptr, int arg1) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_2_895(MethodBind* method, Object* ptr, int arg1, int arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_Curve_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Curve");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ProxyTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ProxyTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_896(MethodBind* method, Object* ptr, int arg1, Object* arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { &arg1, arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_897(MethodBind* method, Object* ptr, int arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_1_898(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_899(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_CubeMap_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CubeMap");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int godot_icall_2_900(MethodBind* method, Object* ptr, int arg1, int arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

int godot_icall_1_901(MethodBind* method, Object* ptr, int arg1) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_2_902(MethodBind* method, Object* ptr, int arg1, NodePath* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_1_903(MethodBind* method, Object* ptr, NodePath* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

int godot_icall_5_904(MethodBind* method, Object* ptr, int arg1, real_t arg2, real_t* arg3, real_t* arg4, real_t* arg5) {
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

void godot_icall_4_905(MethodBind* method, Object* ptr, int arg1, real_t arg2, MonoObject* arg3, real_t arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	double arg4_in = (double)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_906(MethodBind* method, Object* ptr, int arg1, int arg2, MonoObject* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_907(MethodBind* method, Object* ptr, int arg1, int arg2, real_t arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_908(MethodBind* method, Object* ptr, int arg1, int arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

int godot_icall_3_909(MethodBind* method, Object* ptr, int arg1, real_t arg2, bool arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

void godot_icall_2_910(MethodBind* method, Object* ptr, int arg1, int arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_1_911(MethodBind* method, Object* ptr, int arg1) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

MonoArray* godot_icall_2_912(MethodBind* method, Object* ptr, int arg1, real_t arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Array_to_mono_array(ret);
}

void godot_icall_2_913(MethodBind* method, Object* ptr, int arg1, int arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_1_914(MethodBind* method, Object* ptr, int arg1) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

MonoArray* godot_icall_3_915(MethodBind* method, Object* ptr, int arg1, real_t arg2, real_t arg3) {
	PoolIntArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolIntArray_to_mono_array(ret);
}

MonoString* godot_icall_2_916(MethodBind* method, Object* ptr, int arg1, int arg2) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

MonoArray* godot_icall_2_917(MethodBind* method, Object* ptr, int arg1, int arg2) {
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

void godot_icall_5_918(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2, MonoString* arg3, real_t* arg4, int arg5) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	MARSHALLED_IN(Color, arg4, arg4_in);
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

real_t godot_icall_5_919(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2, int arg3, int arg4, real_t* arg5) {
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

void godot_icall_5_920(MethodBind* method, Object* ptr, int arg1, int arg2, real_t* arg3, real_t* arg4, real_t arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	MARSHALLED_IN(Rect2, arg3, arg3_in);
	MARSHALLED_IN(Vector2, arg4, arg4_in);
	double arg5_in = (double)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_921(MethodBind* method, Object* ptr, int arg1, int arg2) {
	Vector2 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector2, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector2), ret_out);
}

MonoObject* godot_icall_0_922(MethodBind* method, Object* ptr) {
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

Object* godot_icall_DynamicFontData_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "DynamicFontData");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_923(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_1_924(MethodBind* method, Object* ptr, int arg1) {
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

bool godot_icall_2_925(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	MARSHALLED_IN(Rect2, arg2, arg2_in);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_2_926(MethodBind* method, Object* ptr, RID* arg1, real_t* arg2) {
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

void godot_icall_4_927(MethodBind* method, Object* ptr, real_t arg1, real_t arg2, real_t arg3, real_t arg4) {
	ERR_FAIL_NULL(ptr);
	double arg1_in = (double)arg1;
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	double arg4_in = (double)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_928(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_929(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_StyleBoxTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StyleBoxTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_930(MethodBind* method, Object* ptr, int arg1, int arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_1_931(MethodBind* method, Object* ptr, int arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
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

void godot_icall_2_932(MethodBind* method, Object* ptr, MonoArray* arg1, MonoArray* arg2) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg1);
	PoolIntArray arg2_in = GDMonoMarshal::mono_array_to_PoolIntArray(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoArray* godot_icall_2_933(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2) {
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

void godot_icall_1_934(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_935(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
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

void godot_icall_1_936(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_937(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_938(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_939(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_940(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_941(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_AudioStreamPlayer3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioStreamPlayer3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_942(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_943(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_944(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_945(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_AudioStreamSample_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioStreamSample");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_LineShape2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "LineShape2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SegmentShape2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SegmentShape2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_RayShape2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RayShape2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CircleShape2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CircleShape2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_RectangleShape2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RectangleShape2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CapsuleShape2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CapsuleShape2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ConvexPolygonShape2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ConvexPolygonShape2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ConcavePolygonShape2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ConcavePolygonShape2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_4_946(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, real_t* arg3, int arg4) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	MARSHALLED_IN(Vector2, arg3, arg3_in);
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_947(MethodBind* method, Object* ptr, int arg1, real_t arg2) {
	Vector2 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector2, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector2), ret_out);
}

MonoObject* godot_icall_1_948(MethodBind* method, Object* ptr, real_t arg1) {
	Vector2 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	double arg1_in = (double)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector2, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector2), ret_out);
}

MonoObject* godot_icall_2_949(MethodBind* method, Object* ptr, real_t arg1, bool arg2) {
	Vector2 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	double arg1_in = (double)arg1;
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector2, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector2), ret_out);
}

MonoArray* godot_icall_2_950(MethodBind* method, Object* ptr, int arg1, real_t arg2) {
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

MonoObject* godot_icall_0_951(MethodBind* method, Object* ptr) {
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

Object* godot_icall_PathFollow2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PathFollow2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int godot_icall_3_952(MethodBind* method, Object* ptr, Object* arg1, real_t* arg2, Object* arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	MARSHALLED_IN(Transform2D, arg2, arg2_in);
	const void* call_args[3] = { arg1, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

MonoArray* godot_icall_3_953(MethodBind* method, Object* ptr, real_t* arg1, real_t* arg2, bool arg3) {
	PoolVector2Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	MARSHALLED_IN(Vector2, arg2, arg2_in);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolVector2Array_to_mono_array(ret);
}

MonoObject* godot_icall_1_954(MethodBind* method, Object* ptr, real_t* arg1) {
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

void godot_icall_2_955(MethodBind* method, Object* ptr, MonoArray* arg1, int arg2) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_956(MethodBind* method, Object* ptr, int arg1, MonoArray* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	PoolVector2Array arg2_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoArray* godot_icall_1_957(MethodBind* method, Object* ptr, int arg1) {
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

MonoObject* godot_icall_0_958(MethodBind* method, Object* ptr) {
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

NodePath* godot_icall_2_959(MethodBind* method, Object* ptr, int arg1, bool arg2) {
	NodePath ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(NodePath(ret));
}

MonoObject* godot_icall_1_960(MethodBind* method, Object* ptr, int arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoArray* godot_icall_1_961(MethodBind* method, Object* ptr, int arg1) {
	PoolStringArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolStringArray_to_mono_array(ret);
}

int godot_icall_1_962(MethodBind* method, Object* ptr, Object* arg1) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

MonoObject* godot_icall_1_963(MethodBind* method, Object* ptr, int arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_0_964(MethodBind* method, Object* ptr) {
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

MonoObject* godot_icall_2_965(MethodBind* method, Object* ptr, real_t arg1, bool arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	double arg1_in = (double)arg1;
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_4_966(MethodBind* method, Object* ptr, int arg1, int arg2, real_t* arg3, real_t arg4) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg3, arg3_in);
	double arg4_in = (double)arg4;
	const void* call_args[4] = { &arg1, &arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_4_967(MethodBind* method, Object* ptr, int arg1, MonoString* arg2, MonoString* arg3, MonoArray* arg4) {
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

void godot_icall_3_968(MethodBind* method, Object* ptr, int arg1, MonoString* arg2, int arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_969(MethodBind* method, Object* ptr, int arg1, MonoString* arg2, MonoString* arg3, MonoObject* arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	Variant arg4_in = GDMonoMarshal::mono_object_to_variant(arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_3_970(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, MonoArray* arg3) {
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
void godot_icall_2_971(MethodBind* method, Object* ptr, int arg1, Object* arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { &arg1, arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_2_972(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_2_973(MethodBind* method, Object* ptr, int arg1, Object* arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { &arg1, arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_2_974(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_4_975(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, Object* arg3, Object* arg4) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[4] = { &arg1_in, &arg2_in, arg3, arg4 };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_976(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_977(MethodBind* method, Object* ptr) {
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

Object* godot_icall_EditorImportPlugin_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorImportPlugin");
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

#ifdef TOOLS_ENABLED
void godot_icall_1_978(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
int godot_icall_0_979(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_1_980(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
int godot_icall_0_981(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_1_982(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
int godot_icall_0_983(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

#endif // TOOLS_ENABLED
Object* godot_icall_EditorFileDialog_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorFileDialog");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

#ifdef TOOLS_ENABLED
void godot_icall_3_984(MethodBind* method, Object* ptr, MonoArray* arg1, Object* arg2, bool arg3) {
	ERR_FAIL_NULL(ptr);
	PoolVector3Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector3Array(arg1);
	const void* call_args[3] = { &arg1_in, arg2, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_3_985(MethodBind* method, Object* ptr, Object* arg1, bool arg2, RID* arg3) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[3] = { arg1, &arg2, arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_2_986(MethodBind* method, Object* ptr, Object* arg1, real_t* arg2) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(AABB, arg2, arg2_in);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_2_987(MethodBind* method, Object* ptr, Object* arg1, real_t arg2) {
	ERR_FAIL_NULL(ptr);
	double arg2_in = (double)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_3_988(MethodBind* method, Object* ptr, MonoArray* arg1, bool arg2, bool arg3) {
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

#ifdef TOOLS_ENABLED
void godot_icall_4_989(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2, MonoString* arg3, MonoObject* arg4) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	Variant arg4_in = GDMonoMarshal::mono_object_to_variant(arg4);
	const void* call_args[4] = { &arg1_in, arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_4_990(MethodBind* method, Object* ptr, Object* arg1, Object* arg2, MonoString* arg3, MonoObject* arg4) {
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

#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_991(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_1_992(MethodBind* method, Object* ptr, MonoString* arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_1_993(MethodBind* method, Object* ptr, int arg1) {
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

#ifdef TOOLS_ENABLED
MonoObject* godot_icall_2_994(MethodBind* method, Object* ptr, real_t* arg1, Object* arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
bool godot_icall_3_995(MethodBind* method, Object* ptr, real_t* arg1, MonoObject* arg2, Object* arg3) {
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
void godot_icall_3_996(MethodBind* method, Object* ptr, real_t* arg1, MonoObject* arg2, Object* arg3) {
	ERR_FAIL_NULL(ptr);
	MARSHALLED_IN(Vector2, arg1, arg1_in);
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	const void* call_args[3] = { &arg1_in, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_2_997(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_998(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_999(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_1000(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_1001(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_1002(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoArray* godot_icall_2_1003(MethodBind* method, Object* ptr, MonoArray* arg1, int arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Array arg1_in = GDMonoMarshal::mono_array_to_Array(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Array_to_mono_array(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_2_1004(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	PoolStringArray arg2_in = GDMonoMarshal::mono_array_to_PoolStringArray(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_3_1005(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2, bool arg3) {
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

Object* godot_icall_EditorResourceConversionPlugin_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorResourceConversionPlugin");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

#ifdef TOOLS_ENABLED
MonoObject* godot_icall_3_1006(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, int arg3) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_3_1007(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, int arg3) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

#endif // TOOLS_ENABLED
Object* godot_icall_EditorSceneImporter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorSceneImporter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_EditorScenePostImport_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorScenePostImport");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_2_1008(MethodBind* method, Object* ptr, MonoString* arg1, bool arg2) {
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

int godot_icall_4_1009(MethodBind* method, Object* ptr, int arg1, int arg2, int arg3, int arg4) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

int godot_icall_4_1010(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, int arg3, int arg4) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_1_1011(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_1012(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_NetworkedMultiplayerENet_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "NetworkedMultiplayerENet");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_1013(MethodBind* method, Object* ptr) {
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

MonoObject* godot_icall_0_1014(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_3_1015(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, MonoArray* arg3) {
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

Object* godot_icall_ARVRInterfaceGDNative_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ARVRInterfaceGDNative");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_1016(MethodBind* method, Object* ptr, MonoArray* arg1) {
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

Object* godot_icall_NativeScript_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "NativeScript");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PluginScript_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PluginScript");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_GDScript_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GDScript");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_1017(MethodBind* method, Object* ptr, MonoObject* arg1) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

bool godot_icall_1_1018(MethodBind* method, Object* ptr, bool arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, bool());
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

MonoObject* godot_icall_0_1019(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_5_1020(MethodBind* method, Object* ptr, int arg1, int arg2, int arg3, int arg4, int arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_3_1021(MethodBind* method, Object* ptr, int arg1, int arg2, int arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

MonoObject* godot_icall_3_1022(MethodBind* method, Object* ptr, int arg1, int arg2, int arg3) {
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

void godot_icall_4_1023(MethodBind* method, Object* ptr, bool arg1, bool arg2, int arg3, int arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[4] = { &arg1, &arg2, &arg3_in, &arg4 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_1024(MethodBind* method, Object* ptr, bool arg1, real_t arg2) {
	ERR_FAIL_NULL(ptr);
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_GridMap_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GridMap");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_MobileVRInterface_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MobileVRInterface");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CSharpScript_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CSharpScript");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall__GodotSharp_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("GodotSharp");
}

int godot_icall_1_1025(MethodBind* method, Object* ptr, MonoObject* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int());
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int)ret;
}

Object* godot_icall_RegExMatch_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RegExMatch");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_3_1026(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, int arg3) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoArray* godot_icall_3_1027(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, int arg3) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Array_to_mono_array(ret);
}

MonoString* godot_icall_5_1028(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, bool arg3, int arg4, int arg5) {
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

Object* godot_icall_AudioStreamOGGVorbis_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioStreamOGGVorbis");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VideoStreamTheora_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VideoStreamTheora");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_4_1029(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, Object* arg3, real_t* arg4) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	MARSHALLED_IN(Vector2, arg4, arg4_in);
	const void* call_args[4] = { &arg1_in, &arg2_in, arg3, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_1030(MethodBind* method, Object* ptr, MonoString* arg1, int arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_3_1031(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, real_t* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	MARSHALLED_IN(Vector2, arg3, arg3_in);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_1032(MethodBind* method, Object* ptr, MonoString* arg1, int arg2) {
	Vector2 ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	MARSHALLED_OUT(Vector2, ret, ret_out)
	return mono_value_box(mono_domain_get(), CACHED_CLASS_RAW(Vector2), ret_out);
}

void godot_icall_4_1033(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, int arg3, int arg4) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_4_1034(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, int arg3, int arg4) {
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

void godot_icall_5_1035(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, int arg3, int arg4, int arg5) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

bool godot_icall_5_1036(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, int arg3, int arg4, int arg5) {
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

void godot_icall_3_1037(MethodBind* method, Object* ptr, MonoString* arg1, MonoObject* arg2, bool arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_1038(MethodBind* method, Object* ptr, MonoString* arg1, MonoObject* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	Dictionary arg2_in = GDMonoMarshal::mono_object_to_Dictionary(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_1039(MethodBind* method, Object* ptr, MonoString* arg1) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::Dictionary_to_mono_object(ret);
}

void godot_icall_4_1040(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, MonoString* arg3, int arg4) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_1041(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, int arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_2_1042(MethodBind* method, Object* ptr, MonoString* arg1, int arg2) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_3_1043(MethodBind* method, Object* ptr, MonoString* arg1, int arg2, MonoString* arg3) {
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

MonoObject* godot_icall_0_1044(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_3_1045(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, MonoArray* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Array arg3_in = GDMonoMarshal::mono_array_to_Array(arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_1046(MethodBind* method, Object* ptr, MonoArray* arg1) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Array arg1_in = GDMonoMarshal::mono_array_to_Array(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

Object* godot_icall_VisualScriptFunctionState_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptFunctionState");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptFunction_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptFunction");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_1047(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_1048(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_1049(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_1050(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_VisualScriptOperator_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptOperator");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptVariableSet_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptVariableSet");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptVariableGet_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptVariableGet");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptConstant_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptConstant");
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

Object* godot_icall_VisualScriptGlobalConstant_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptGlobalConstant");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptClassConstant_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptClassConstant");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_1051(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_1052(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_VisualScriptMathConstant_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptMathConstant");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptBasicTypeConstant_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptBasicTypeConstant");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptEngineSingleton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptEngineSingleton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptSelf_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptSelf");
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

Object* godot_icall_VisualScriptResourcePath_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptResourcePath");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptCustomNode_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptCustomNode");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptSubCall_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptSubCall");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptComment_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptComment");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptConstructor_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptConstructor");
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

void godot_icall_1_1053(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_1054(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_VisualScriptInputAction_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptInputAction");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptDeconstruct_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptDeconstruct");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptPreload_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptPreload");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptTypeCast_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptTypeCast");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_1055(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_1056(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_1057(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_1058(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_VisualScriptFunctionCall_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptFunctionCall");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_1059(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_1060(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

void godot_icall_1_1061(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_1062(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_VisualScriptPropertySet_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptPropertySet");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_1063(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_1064(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_VisualScriptPropertyGet_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptPropertyGet");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptEmitSignal_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptEmitSignal");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptReturn_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptReturn");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptCondition_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptCondition");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptWhile_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptWhile");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptIterator_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptIterator");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptSequence_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptSequence");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptSwitch_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptSwitch");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptSelect_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptSelect");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_1065(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_1066(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_VisualScriptYield_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptYield");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_1067(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_1068(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_VisualScriptYieldSignal_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptYieldSignal");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_1069(MethodBind* method, Object* ptr, int arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

int godot_icall_0_1070(MethodBind* method, Object* ptr) {
	int ret;
	ERR_FAIL_NULL_V(ptr, int());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

Object* godot_icall_VisualScriptBuiltinFunc_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptBuiltinFunc");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptExpression_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptExpression");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall__VisualScriptEditor_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("VisualScriptEditor");
}

Object* godot_icall_VideoStreamWebm_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VideoStreamWebm");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

namespace GodotSharpBindings
{
uint64_t get_core_api_hash() { return -6572138821958000303; }
#ifdef TOOLS_ENABLED
uint64_t get_editor_api_hash() { return -6901705243025654160; }
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
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Object_Ctor", (void*)godot_icall_Object_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Reference_Ctor", (void*)godot_icall_Reference_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Resource_Ctor", (void*)godot_icall_Resource_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_WeakRef_Ctor", (void*)godot_icall_WeakRef_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Image_Ctor", (void*)godot_icall_Image_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_InputEventKey_Ctor", (void*)godot_icall_InputEventKey_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_InputEventMouseButton_Ctor", (void*)godot_icall_InputEventMouseButton_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_InputEventMouseMotion_Ctor", (void*)godot_icall_InputEventMouseMotion_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_InputEventJoypadButton_Ctor", (void*)godot_icall_InputEventJoypadButton_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_InputEventJoypadMotion_Ctor", (void*)godot_icall_InputEventJoypadMotion_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_InputEventScreenDrag_Ctor", (void*)godot_icall_InputEventScreenDrag_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_InputEventScreenTouch_Ctor", (void*)godot_icall_InputEventScreenTouch_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_InputEventAction_Ctor", (void*)godot_icall_InputEventAction_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_InputEventMagnifyGesture_Ctor", (void*)godot_icall_InputEventMagnifyGesture_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_InputEventPanGesture_Ctor", (void*)godot_icall_InputEventPanGesture_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_FuncRef_Ctor", (void*)godot_icall_FuncRef_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_StreamPeerBuffer_Ctor", (void*)godot_icall_StreamPeerBuffer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_StreamPeerTCP_Ctor", (void*)godot_icall_StreamPeerTCP_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_TCP_Server_Ctor", (void*)godot_icall_TCP_Server_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PacketPeerUDP_Ctor", (void*)godot_icall_PacketPeerUDP_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_StreamPeerSSL_Ctor", (void*)godot_icall_StreamPeerSSL_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_IP_get_singleton", (void*)godot_icall_IP_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PacketPeerStream_Ctor", (void*)godot_icall_PacketPeerStream_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_MainLoop_Ctor", (void*)godot_icall_MainLoop_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Translation_Ctor", (void*)godot_icall_Translation_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PHashTranslation_Ctor", (void*)godot_icall_PHashTranslation_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_UndoRedo_Ctor", (void*)godot_icall_UndoRedo_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_HTTPClient_Ctor", (void*)godot_icall_HTTPClient_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_TriangleMesh_Ctor", (void*)godot_icall_TriangleMesh_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_File_Ctor", (void*)godot_icall_File_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Directory_Ctor", (void*)godot_icall_Directory_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Thread_Ctor", (void*)godot_icall_Thread_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Mutex_Ctor", (void*)godot_icall_Mutex_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Semaphore_Ctor", (void*)godot_icall_Semaphore_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_XMLParser_Ctor", (void*)godot_icall_XMLParser_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ConfigFile_Ctor", (void*)godot_icall_ConfigFile_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PCKPacker_Ctor", (void*)godot_icall_PCKPacker_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PackedDataContainer_Ctor", (void*)godot_icall_PackedDataContainer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AStar_Ctor", (void*)godot_icall_AStar_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_EncodedObjectAsID_Ctor", (void*)godot_icall_EncodedObjectAsID_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_JSONParseResult_Ctor", (void*)godot_icall_JSONParseResult_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall__Geometry_get_singleton", (void*)godot_icall__Geometry_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall__ResourceLoader_get_singleton", (void*)godot_icall__ResourceLoader_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall__ResourceSaver_get_singleton", (void*)godot_icall__ResourceSaver_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall__OS_get_singleton", (void*)godot_icall__OS_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall__Engine_get_singleton", (void*)godot_icall__Engine_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall__ClassDB_get_singleton", (void*)godot_icall__ClassDB_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall__Marshalls_get_singleton", (void*)godot_icall__Marshalls_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall__JSON_get_singleton", (void*)godot_icall__JSON_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ProjectSettings_get_singleton", (void*)godot_icall_ProjectSettings_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_InputMap_get_singleton", (void*)godot_icall_InputMap_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_TranslationServer_get_singleton", (void*)godot_icall_TranslationServer_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Performance_get_singleton", (void*)godot_icall_Performance_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualServer_get_singleton", (void*)godot_icall_VisualServer_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Input_get_singleton", (void*)godot_icall_Input_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioServer_get_singleton", (void*)godot_icall_AudioServer_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ARVRServer_get_singleton", (void*)godot_icall_ARVRServer_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PhysicsServer_get_singleton", (void*)godot_icall_PhysicsServer_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Physics2DServer_get_singleton", (void*)godot_icall_Physics2DServer_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ARVRPositionalTracker_Ctor", (void*)godot_icall_ARVRPositionalTracker_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioStreamRandomPitch_Ctor", (void*)godot_icall_AudioStreamRandomPitch_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectEQ_Ctor", (void*)godot_icall_AudioEffectEQ_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectFilter_Ctor", (void*)godot_icall_AudioEffectFilter_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectAmplify_Ctor", (void*)godot_icall_AudioEffectAmplify_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioBusLayout_Ctor", (void*)godot_icall_AudioBusLayout_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectReverb_Ctor", (void*)godot_icall_AudioEffectReverb_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectLowPassFilter_Ctor", (void*)godot_icall_AudioEffectLowPassFilter_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectHighPassFilter_Ctor", (void*)godot_icall_AudioEffectHighPassFilter_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectBandPassFilter_Ctor", (void*)godot_icall_AudioEffectBandPassFilter_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectNotchFilter_Ctor", (void*)godot_icall_AudioEffectNotchFilter_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectBandLimitFilter_Ctor", (void*)godot_icall_AudioEffectBandLimitFilter_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectLowShelfFilter_Ctor", (void*)godot_icall_AudioEffectLowShelfFilter_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectHighShelfFilter_Ctor", (void*)godot_icall_AudioEffectHighShelfFilter_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectEQ6_Ctor", (void*)godot_icall_AudioEffectEQ6_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectEQ10_Ctor", (void*)godot_icall_AudioEffectEQ10_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectEQ21_Ctor", (void*)godot_icall_AudioEffectEQ21_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectDistortion_Ctor", (void*)godot_icall_AudioEffectDistortion_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectStereoEnhance_Ctor", (void*)godot_icall_AudioEffectStereoEnhance_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectPanner_Ctor", (void*)godot_icall_AudioEffectPanner_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectChorus_Ctor", (void*)godot_icall_AudioEffectChorus_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectDelay_Ctor", (void*)godot_icall_AudioEffectDelay_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectCompressor_Ctor", (void*)godot_icall_AudioEffectCompressor_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectLimiter_Ctor", (void*)godot_icall_AudioEffectLimiter_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectPitchShift_Ctor", (void*)godot_icall_AudioEffectPitchShift_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectPhaser_Ctor", (void*)godot_icall_AudioEffectPhaser_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Physics2DTestMotionResult_Ctor", (void*)godot_icall_Physics2DTestMotionResult_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Physics2DShapeQueryParameters_Ctor", (void*)godot_icall_Physics2DShapeQueryParameters_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PhysicsShapeQueryParameters_Ctor", (void*)godot_icall_PhysicsShapeQueryParameters_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Node_Ctor", (void*)godot_icall_Node_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Viewport_Ctor", (void*)godot_icall_Viewport_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_World_Ctor", (void*)godot_icall_World_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ViewportTexture_Ctor", (void*)godot_icall_ViewportTexture_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_HTTPRequest_Ctor", (void*)godot_icall_HTTPRequest_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Timer_Ctor", (void*)godot_icall_Timer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CanvasLayer_Ctor", (void*)godot_icall_CanvasLayer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Node2D_Ctor", (void*)godot_icall_Node2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CanvasModulate_Ctor", (void*)godot_icall_CanvasModulate_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ResourcePreloader_Ctor", (void*)godot_icall_ResourcePreloader_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ButtonGroup_Ctor", (void*)godot_icall_ButtonGroup_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Control_Ctor", (void*)godot_icall_Control_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Theme_Ctor", (void*)godot_icall_Theme_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ShortCut_Ctor", (void*)godot_icall_ShortCut_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Button_Ctor", (void*)godot_icall_Button_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Label_Ctor", (void*)godot_icall_Label_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_HScrollBar_Ctor", (void*)godot_icall_HScrollBar_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VScrollBar_Ctor", (void*)godot_icall_VScrollBar_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ProgressBar_Ctor", (void*)godot_icall_ProgressBar_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_HSlider_Ctor", (void*)godot_icall_HSlider_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VSlider_Ctor", (void*)godot_icall_VSlider_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Popup_Ctor", (void*)godot_icall_Popup_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PopupPanel_Ctor", (void*)godot_icall_PopupPanel_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_MenuButton_Ctor", (void*)godot_icall_MenuButton_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CheckBox_Ctor", (void*)godot_icall_CheckBox_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CheckButton_Ctor", (void*)godot_icall_CheckButton_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ToolButton_Ctor", (void*)godot_icall_ToolButton_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_LinkButton_Ctor", (void*)godot_icall_LinkButton_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Panel_Ctor", (void*)godot_icall_Panel_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_TextureRect_Ctor", (void*)godot_icall_TextureRect_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ColorRect_Ctor", (void*)godot_icall_ColorRect_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_NinePatchRect_Ctor", (void*)godot_icall_NinePatchRect_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_TabContainer_Ctor", (void*)godot_icall_TabContainer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Tabs_Ctor", (void*)godot_icall_Tabs_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_HSeparator_Ctor", (void*)godot_icall_HSeparator_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VSeparator_Ctor", (void*)godot_icall_VSeparator_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_TextureButton_Ctor", (void*)godot_icall_TextureButton_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_BitMap_Ctor", (void*)godot_icall_BitMap_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Container_Ctor", (void*)godot_icall_Container_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_HBoxContainer_Ctor", (void*)godot_icall_HBoxContainer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VBoxContainer_Ctor", (void*)godot_icall_VBoxContainer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_GridContainer_Ctor", (void*)godot_icall_GridContainer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CenterContainer_Ctor", (void*)godot_icall_CenterContainer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ScrollContainer_Ctor", (void*)godot_icall_ScrollContainer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PanelContainer_Ctor", (void*)godot_icall_PanelContainer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VSplitContainer_Ctor", (void*)godot_icall_VSplitContainer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_HSplitContainer_Ctor", (void*)godot_icall_HSplitContainer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_GraphNode_Ctor", (void*)godot_icall_GraphNode_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_GraphEdit_Ctor", (void*)godot_icall_GraphEdit_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_TextureProgress_Ctor", (void*)godot_icall_TextureProgress_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ItemList_Ctor", (void*)godot_icall_ItemList_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_WindowDialog_Ctor", (void*)godot_icall_WindowDialog_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AcceptDialog_Ctor", (void*)godot_icall_AcceptDialog_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ConfirmationDialog_Ctor", (void*)godot_icall_ConfirmationDialog_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_FileDialog_Ctor", (void*)godot_icall_FileDialog_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_LineEdit_Ctor", (void*)godot_icall_LineEdit_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PopupMenu_Ctor", (void*)godot_icall_PopupMenu_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Tree_Ctor", (void*)godot_icall_Tree_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_TextEdit_Ctor", (void*)godot_icall_TextEdit_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_OptionButton_Ctor", (void*)godot_icall_OptionButton_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_SpinBox_Ctor", (void*)godot_icall_SpinBox_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ReferenceRect_Ctor", (void*)godot_icall_ReferenceRect_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ColorPicker_Ctor", (void*)godot_icall_ColorPicker_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ColorPickerButton_Ctor", (void*)godot_icall_ColorPickerButton_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_RichTextLabel_Ctor", (void*)godot_icall_RichTextLabel_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VideoPlayer_Ctor", (void*)godot_icall_VideoPlayer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PopupDialog_Ctor", (void*)godot_icall_PopupDialog_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_MarginContainer_Ctor", (void*)godot_icall_MarginContainer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ViewportContainer_Ctor", (void*)godot_icall_ViewportContainer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Spatial_Ctor", (void*)godot_icall_Spatial_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Skeleton_Ctor", (void*)godot_icall_Skeleton_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AnimationPlayer_Ctor", (void*)godot_icall_AnimationPlayer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Tween_Ctor", (void*)godot_icall_Tween_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_BoneAttachment_Ctor", (void*)godot_icall_BoneAttachment_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Camera_Ctor", (void*)godot_icall_Camera_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Environment_Ctor", (void*)godot_icall_Environment_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Listener_Ctor", (void*)godot_icall_Listener_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ARVRCamera_Ctor", (void*)godot_icall_ARVRCamera_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ARVRController_Ctor", (void*)godot_icall_ARVRController_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ARVRAnchor_Ctor", (void*)godot_icall_ARVRAnchor_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ARVROrigin_Ctor", (void*)godot_icall_ARVROrigin_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_InterpolatedCamera_Ctor", (void*)godot_icall_InterpolatedCamera_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_MeshInstance_Ctor", (void*)godot_icall_MeshInstance_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ImmediateGeometry_Ctor", (void*)godot_icall_ImmediateGeometry_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Sprite3D_Ctor", (void*)godot_icall_Sprite3D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AnimatedSprite3D_Ctor", (void*)godot_icall_AnimatedSprite3D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_SpriteFrames_Ctor", (void*)godot_icall_SpriteFrames_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_DirectionalLight_Ctor", (void*)godot_icall_DirectionalLight_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_OmniLight_Ctor", (void*)godot_icall_OmniLight_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_SpotLight_Ctor", (void*)godot_icall_SpotLight_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ReflectionProbe_Ctor", (void*)godot_icall_ReflectionProbe_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_GIProbe_Ctor", (void*)godot_icall_GIProbe_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_GIProbeData_Ctor", (void*)godot_icall_GIProbeData_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_BakedLightmap_Ctor", (void*)godot_icall_BakedLightmap_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_BakedLightmapData_Ctor", (void*)godot_icall_BakedLightmapData_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AnimationTreePlayer_Ctor", (void*)godot_icall_AnimationTreePlayer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Particles_Ctor", (void*)godot_icall_Particles_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Position3D_Ctor", (void*)godot_icall_Position3D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_NavigationMeshInstance_Ctor", (void*)godot_icall_NavigationMeshInstance_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_NavigationMesh_Ctor", (void*)godot_icall_NavigationMesh_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Navigation_Ctor", (void*)godot_icall_Navigation_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_StaticBody_Ctor", (void*)godot_icall_StaticBody_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_RigidBody_Ctor", (void*)godot_icall_RigidBody_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_KinematicCollision_Ctor", (void*)godot_icall_KinematicCollision_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_KinematicBody_Ctor", (void*)godot_icall_KinematicBody_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VehicleBody_Ctor", (void*)godot_icall_VehicleBody_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VehicleWheel_Ctor", (void*)godot_icall_VehicleWheel_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Area_Ctor", (void*)godot_icall_Area_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ProximityGroup_Ctor", (void*)godot_icall_ProximityGroup_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CollisionShape_Ctor", (void*)godot_icall_CollisionShape_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CollisionPolygon_Ctor", (void*)godot_icall_CollisionPolygon_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_RayCast_Ctor", (void*)godot_icall_RayCast_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_MultiMeshInstance_Ctor", (void*)godot_icall_MultiMeshInstance_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_MultiMesh_Ctor", (void*)godot_icall_MultiMesh_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Curve3D_Ctor", (void*)godot_icall_Curve3D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Path_Ctor", (void*)godot_icall_Path_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PathFollow_Ctor", (void*)godot_icall_PathFollow_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisibilityNotifier_Ctor", (void*)godot_icall_VisibilityNotifier_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisibilityEnabler_Ctor", (void*)godot_icall_VisibilityEnabler_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_WorldEnvironment_Ctor", (void*)godot_icall_WorldEnvironment_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_RemoteTransform_Ctor", (void*)godot_icall_RemoteTransform_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PinJoint_Ctor", (void*)godot_icall_PinJoint_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_HingeJoint_Ctor", (void*)godot_icall_HingeJoint_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_SliderJoint_Ctor", (void*)godot_icall_SliderJoint_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ConeTwistJoint_Ctor", (void*)godot_icall_ConeTwistJoint_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Generic6DOFJoint_Ctor", (void*)godot_icall_Generic6DOFJoint_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_MeshLibrary_Ctor", (void*)godot_icall_MeshLibrary_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Shader_Ctor", (void*)godot_icall_Shader_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ShaderMaterial_Ctor", (void*)godot_icall_ShaderMaterial_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CanvasItemMaterial_Ctor", (void*)godot_icall_CanvasItemMaterial_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Particles2D_Ctor", (void*)godot_icall_Particles2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Sprite_Ctor", (void*)godot_icall_Sprite_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AnimatedSprite_Ctor", (void*)godot_icall_AnimatedSprite_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Position2D_Ctor", (void*)godot_icall_Position2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Line2D_Ctor", (void*)godot_icall_Line2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Gradient_Ctor", (void*)godot_icall_Gradient_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_StaticBody2D_Ctor", (void*)godot_icall_StaticBody2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_RigidBody2D_Ctor", (void*)godot_icall_RigidBody2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_KinematicBody2D_Ctor", (void*)godot_icall_KinematicBody2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_KinematicCollision2D_Ctor", (void*)godot_icall_KinematicCollision2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Area2D_Ctor", (void*)godot_icall_Area2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CollisionShape2D_Ctor", (void*)godot_icall_CollisionShape2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CollisionPolygon2D_Ctor", (void*)godot_icall_CollisionPolygon2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_RayCast2D_Ctor", (void*)godot_icall_RayCast2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisibilityNotifier2D_Ctor", (void*)godot_icall_VisibilityNotifier2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisibilityEnabler2D_Ctor", (void*)godot_icall_VisibilityEnabler2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Polygon2D_Ctor", (void*)godot_icall_Polygon2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Light2D_Ctor", (void*)godot_icall_Light2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_LightOccluder2D_Ctor", (void*)godot_icall_LightOccluder2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_OccluderPolygon2D_Ctor", (void*)godot_icall_OccluderPolygon2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_YSort_Ctor", (void*)godot_icall_YSort_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_BackBufferCopy_Ctor", (void*)godot_icall_BackBufferCopy_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Camera2D_Ctor", (void*)godot_icall_Camera2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PinJoint2D_Ctor", (void*)godot_icall_PinJoint2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_GrooveJoint2D_Ctor", (void*)godot_icall_GrooveJoint2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_DampedSpringJoint2D_Ctor", (void*)godot_icall_DampedSpringJoint2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_TileSet_Ctor", (void*)godot_icall_TileSet_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_TileMap_Ctor", (void*)godot_icall_TileMap_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ParallaxBackground_Ctor", (void*)godot_icall_ParallaxBackground_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ParallaxLayer_Ctor", (void*)godot_icall_ParallaxLayer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_TouchScreenButton_Ctor", (void*)godot_icall_TouchScreenButton_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_RemoteTransform2D_Ctor", (void*)godot_icall_RemoteTransform2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ArrayMesh_Ctor", (void*)godot_icall_ArrayMesh_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CapsuleMesh_Ctor", (void*)godot_icall_CapsuleMesh_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CubeMesh_Ctor", (void*)godot_icall_CubeMesh_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CylinderMesh_Ctor", (void*)godot_icall_CylinderMesh_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PlaneMesh_Ctor", (void*)godot_icall_PlaneMesh_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PrismMesh_Ctor", (void*)godot_icall_PrismMesh_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_QuadMesh_Ctor", (void*)godot_icall_QuadMesh_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_SphereMesh_Ctor", (void*)godot_icall_SphereMesh_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_SpatialMaterial_Ctor", (void*)godot_icall_SpatialMaterial_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ParticlesMaterial_Ctor", (void*)godot_icall_ParticlesMaterial_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CurveTexture_Ctor", (void*)godot_icall_CurveTexture_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_GradientTexture_Ctor", (void*)godot_icall_GradientTexture_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_RayShape_Ctor", (void*)godot_icall_RayShape_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_SphereShape_Ctor", (void*)godot_icall_SphereShape_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_BoxShape_Ctor", (void*)godot_icall_BoxShape_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CapsuleShape_Ctor", (void*)godot_icall_CapsuleShape_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PlaneShape_Ctor", (void*)godot_icall_PlaneShape_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ConvexPolygonShape_Ctor", (void*)godot_icall_ConvexPolygonShape_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ConcavePolygonShape_Ctor", (void*)godot_icall_ConcavePolygonShape_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_SurfaceTool_Ctor", (void*)godot_icall_SurfaceTool_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_MeshDataTool_Ctor", (void*)godot_icall_MeshDataTool_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_SpatialVelocityTracker_Ctor", (void*)godot_icall_SpatialVelocityTracker_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_World2D_Ctor", (void*)godot_icall_World2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PanoramaSky_Ctor", (void*)godot_icall_PanoramaSky_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ProceduralSky_Ctor", (void*)godot_icall_ProceduralSky_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_StreamTexture_Ctor", (void*)godot_icall_StreamTexture_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ImageTexture_Ctor", (void*)godot_icall_ImageTexture_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AtlasTexture_Ctor", (void*)godot_icall_AtlasTexture_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_LargeTexture_Ctor", (void*)godot_icall_LargeTexture_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Curve_Ctor", (void*)godot_icall_Curve_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ProxyTexture_Ctor", (void*)godot_icall_ProxyTexture_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CubeMap_Ctor", (void*)godot_icall_CubeMap_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Animation_Ctor", (void*)godot_icall_Animation_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_BitmapFont_Ctor", (void*)godot_icall_BitmapFont_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_DynamicFontData_Ctor", (void*)godot_icall_DynamicFontData_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_DynamicFont_Ctor", (void*)godot_icall_DynamicFont_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_StyleBoxEmpty_Ctor", (void*)godot_icall_StyleBoxEmpty_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_StyleBoxTexture_Ctor", (void*)godot_icall_StyleBoxTexture_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_StyleBoxFlat_Ctor", (void*)godot_icall_StyleBoxFlat_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_StyleBoxLine_Ctor", (void*)godot_icall_StyleBoxLine_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PolygonPathFinder_Ctor", (void*)godot_icall_PolygonPathFinder_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioStreamPlayer_Ctor", (void*)godot_icall_AudioStreamPlayer_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioStreamPlayer2D_Ctor", (void*)godot_icall_AudioStreamPlayer2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioStreamPlayer3D_Ctor", (void*)godot_icall_AudioStreamPlayer3D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioStreamSample_Ctor", (void*)godot_icall_AudioStreamSample_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_LineShape2D_Ctor", (void*)godot_icall_LineShape2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_SegmentShape2D_Ctor", (void*)godot_icall_SegmentShape2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_RayShape2D_Ctor", (void*)godot_icall_RayShape2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CircleShape2D_Ctor", (void*)godot_icall_CircleShape2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_RectangleShape2D_Ctor", (void*)godot_icall_RectangleShape2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CapsuleShape2D_Ctor", (void*)godot_icall_CapsuleShape2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ConvexPolygonShape2D_Ctor", (void*)godot_icall_ConvexPolygonShape2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ConcavePolygonShape2D_Ctor", (void*)godot_icall_ConcavePolygonShape2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Curve2D_Ctor", (void*)godot_icall_Curve2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Path2D_Ctor", (void*)godot_icall_Path2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PathFollow2D_Ctor", (void*)godot_icall_PathFollow2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_Navigation2D_Ctor", (void*)godot_icall_Navigation2D_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_NavigationPolygon_Ctor", (void*)godot_icall_NavigationPolygon_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_NavigationPolygonInstance_Ctor", (void*)godot_icall_NavigationPolygonInstance_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PackedScene_Ctor", (void*)godot_icall_PackedScene_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_SceneTree_Ctor", (void*)godot_icall_SceneTree_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_JavaScript_get_singleton", (void*)godot_icall_JavaScript_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_NetworkedMultiplayerENet_Ctor", (void*)godot_icall_NetworkedMultiplayerENet_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_GDNativeLibrary_Ctor", (void*)godot_icall_GDNativeLibrary_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_GDNative_Ctor", (void*)godot_icall_GDNative_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_ARVRInterfaceGDNative_Ctor", (void*)godot_icall_ARVRInterfaceGDNative_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_NativeScript_Ctor", (void*)godot_icall_NativeScript_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_PluginScript_Ctor", (void*)godot_icall_PluginScript_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_GDScript_Ctor", (void*)godot_icall_GDScript_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_GridMap_Ctor", (void*)godot_icall_GridMap_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_MobileVRInterface_Ctor", (void*)godot_icall_MobileVRInterface_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_CSharpScript_Ctor", (void*)godot_icall_CSharpScript_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall__GodotSharp_get_singleton", (void*)godot_icall__GodotSharp_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_RegExMatch_Ctor", (void*)godot_icall_RegExMatch_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_RegEx_Ctor", (void*)godot_icall_RegEx_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_AudioStreamOGGVorbis_Ctor", (void*)godot_icall_AudioStreamOGGVorbis_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VideoStreamTheora_Ctor", (void*)godot_icall_VideoStreamTheora_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScript_Ctor", (void*)godot_icall_VisualScript_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptFunctionState_Ctor", (void*)godot_icall_VisualScriptFunctionState_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptFunction_Ctor", (void*)godot_icall_VisualScriptFunction_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptOperator_Ctor", (void*)godot_icall_VisualScriptOperator_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptVariableSet_Ctor", (void*)godot_icall_VisualScriptVariableSet_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptVariableGet_Ctor", (void*)godot_icall_VisualScriptVariableGet_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptConstant_Ctor", (void*)godot_icall_VisualScriptConstant_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptIndexGet_Ctor", (void*)godot_icall_VisualScriptIndexGet_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptIndexSet_Ctor", (void*)godot_icall_VisualScriptIndexSet_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptGlobalConstant_Ctor", (void*)godot_icall_VisualScriptGlobalConstant_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptClassConstant_Ctor", (void*)godot_icall_VisualScriptClassConstant_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptMathConstant_Ctor", (void*)godot_icall_VisualScriptMathConstant_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptBasicTypeConstant_Ctor", (void*)godot_icall_VisualScriptBasicTypeConstant_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptEngineSingleton_Ctor", (void*)godot_icall_VisualScriptEngineSingleton_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptSelf_Ctor", (void*)godot_icall_VisualScriptSelf_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptSceneNode_Ctor", (void*)godot_icall_VisualScriptSceneNode_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptSceneTree_Ctor", (void*)godot_icall_VisualScriptSceneTree_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptResourcePath_Ctor", (void*)godot_icall_VisualScriptResourcePath_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptCustomNode_Ctor", (void*)godot_icall_VisualScriptCustomNode_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptSubCall_Ctor", (void*)godot_icall_VisualScriptSubCall_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptComment_Ctor", (void*)godot_icall_VisualScriptComment_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptConstructor_Ctor", (void*)godot_icall_VisualScriptConstructor_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptLocalVar_Ctor", (void*)godot_icall_VisualScriptLocalVar_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptLocalVarSet_Ctor", (void*)godot_icall_VisualScriptLocalVarSet_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptInputAction_Ctor", (void*)godot_icall_VisualScriptInputAction_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptDeconstruct_Ctor", (void*)godot_icall_VisualScriptDeconstruct_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptPreload_Ctor", (void*)godot_icall_VisualScriptPreload_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptTypeCast_Ctor", (void*)godot_icall_VisualScriptTypeCast_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptFunctionCall_Ctor", (void*)godot_icall_VisualScriptFunctionCall_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptPropertySet_Ctor", (void*)godot_icall_VisualScriptPropertySet_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptPropertyGet_Ctor", (void*)godot_icall_VisualScriptPropertyGet_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptEmitSignal_Ctor", (void*)godot_icall_VisualScriptEmitSignal_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptReturn_Ctor", (void*)godot_icall_VisualScriptReturn_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptCondition_Ctor", (void*)godot_icall_VisualScriptCondition_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptWhile_Ctor", (void*)godot_icall_VisualScriptWhile_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptIterator_Ctor", (void*)godot_icall_VisualScriptIterator_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptSequence_Ctor", (void*)godot_icall_VisualScriptSequence_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptSwitch_Ctor", (void*)godot_icall_VisualScriptSwitch_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptSelect_Ctor", (void*)godot_icall_VisualScriptSelect_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptYield_Ctor", (void*)godot_icall_VisualScriptYield_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptYieldSignal_Ctor", (void*)godot_icall_VisualScriptYieldSignal_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptBuiltinFunc_Ctor", (void*)godot_icall_VisualScriptBuiltinFunc_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptExpression_Ctor", (void*)godot_icall_VisualScriptExpression_Ctor);
	mono_add_internal_call("Godot.NativeCalls::godot_icall__VisualScriptEditor_get_singleton", (void*)godot_icall__VisualScriptEditor_get_singleton);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_VideoStreamWebm_Ctor", (void*)godot_icall_VideoStreamWebm_Ctor);
#ifdef TOOLS_ENABLED
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorPlugin_Ctor", (void*)godot_icall_EditorPlugin_Ctor);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorImportPlugin_Ctor", (void*)godot_icall_EditorImportPlugin_Ctor);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorScript_Ctor", (void*)godot_icall_EditorScript_Ctor);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorSelection_Ctor", (void*)godot_icall_EditorSelection_Ctor);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorFileDialog_Ctor", (void*)godot_icall_EditorFileDialog_Ctor);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorSpatialGizmo_Ctor", (void*)godot_icall_EditorSpatialGizmo_Ctor);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorResourcePreviewGenerator_Ctor", (void*)godot_icall_EditorResourcePreviewGenerator_Ctor);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorFileSystemDirectory_Ctor", (void*)godot_icall_EditorFileSystemDirectory_Ctor);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorExportPlugin_Ctor", (void*)godot_icall_EditorExportPlugin_Ctor);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorResourceConversionPlugin_Ctor", (void*)godot_icall_EditorResourceConversionPlugin_Ctor);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorSceneImporter_Ctor", (void*)godot_icall_EditorSceneImporter_Ctor);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorScenePostImport_Ctor", (void*)godot_icall_EditorScenePostImport_Ctor);
#endif // TOOLS_ENABLED
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_0", (void*)godot_icall_0_0);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_1", (void*)godot_icall_0_1);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_2", (void*)godot_icall_1_2);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_3", (void*)godot_icall_2_3);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_4", (void*)godot_icall_1_4);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_5", (void*)godot_icall_2_5);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_6", (void*)godot_icall_1_6);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_7", (void*)godot_icall_0_7);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_8", (void*)godot_icall_2_8);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_9", (void*)godot_icall_0_9);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_10", (void*)godot_icall_1_10);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_11", (void*)godot_icall_0_11);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_12", (void*)godot_icall_0_12);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_13", (void*)godot_icall_2_13);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_14", (void*)godot_icall_2_14);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_15", (void*)godot_icall_2_15);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_16", (void*)godot_icall_1_16);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_17", (void*)godot_icall_5_17);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_18", (void*)godot_icall_3_18);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_19", (void*)godot_icall_3_19);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_20", (void*)godot_icall_1_20);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_21", (void*)godot_icall_0_21);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_22", (void*)godot_icall_1_22);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_23", (void*)godot_icall_1_23);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_24", (void*)godot_icall_0_24);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_25", (void*)godot_icall_0_25);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_26", (void*)godot_icall_1_26);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_27", (void*)godot_icall_1_27);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_28", (void*)godot_icall_1_28);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_29", (void*)godot_icall_0_29);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_30", (void*)godot_icall_0_30);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_31", (void*)godot_icall_0_31);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_32", (void*)godot_icall_0_32);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_33", (void*)godot_icall_0_33);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_34", (void*)godot_icall_1_34);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_35", (void*)godot_icall_1_35);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_36", (void*)godot_icall_3_36);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_37", (void*)godot_icall_2_37);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_38", (void*)godot_icall_0_38);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_39", (void*)godot_icall_4_39);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_40", (void*)godot_icall_5_40);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_41", (void*)godot_icall_1_41);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_42", (void*)godot_icall_0_42);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_43", (void*)godot_icall_3_43);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_44", (void*)godot_icall_3_44);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_45", (void*)godot_icall_4_45);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_46", (void*)godot_icall_1_46);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_47", (void*)godot_icall_0_47);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_48", (void*)godot_icall_1_48);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_49", (void*)godot_icall_1_49);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_50", (void*)godot_icall_0_50);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_51", (void*)godot_icall_3_51);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_52", (void*)godot_icall_2_52);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_53", (void*)godot_icall_1_53);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_54", (void*)godot_icall_1_54);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_55", (void*)godot_icall_1_55);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_56", (void*)godot_icall_2_56);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_57", (void*)godot_icall_1_57);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_58", (void*)godot_icall_1_58);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_59", (void*)godot_icall_0_59);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_60", (void*)godot_icall_1_60);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_61", (void*)godot_icall_1_61);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_62", (void*)godot_icall_1_62);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_63", (void*)godot_icall_1_63);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_64", (void*)godot_icall_1_64);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_65", (void*)godot_icall_1_65);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_66", (void*)godot_icall_1_66);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_67", (void*)godot_icall_0_67);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_68", (void*)godot_icall_2_68);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_69", (void*)godot_icall_0_69);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_70", (void*)godot_icall_2_70);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_71", (void*)godot_icall_0_71);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_72", (void*)godot_icall_1_72);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_73", (void*)godot_icall_3_73);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_74", (void*)godot_icall_1_74);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_75", (void*)godot_icall_3_75);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_76", (void*)godot_icall_0_76);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_77", (void*)godot_icall_2_77);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_78", (void*)godot_icall_2_78);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_79", (void*)godot_icall_1_79);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_80", (void*)godot_icall_1_80);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_81", (void*)godot_icall_0_81);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_82", (void*)godot_icall_1_82);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_83", (void*)godot_icall_2_83);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_84", (void*)godot_icall_1_84);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_85", (void*)godot_icall_2_85);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_86", (void*)godot_icall_3_86);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_87", (void*)godot_icall_3_87);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_88", (void*)godot_icall_4_88);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_89", (void*)godot_icall_0_89);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_90", (void*)godot_icall_4_90);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_91", (void*)godot_icall_4_91);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_92", (void*)godot_icall_0_92);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_93", (void*)godot_icall_1_93);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_94", (void*)godot_icall_0_94);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_95", (void*)godot_icall_3_95);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_96", (void*)godot_icall_3_96);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_97", (void*)godot_icall_3_97);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_98", (void*)godot_icall_1_98);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_99", (void*)godot_icall_1_99);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_100", (void*)godot_icall_1_100);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_101", (void*)godot_icall_2_101);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_102", (void*)godot_icall_2_102);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_103", (void*)godot_icall_4_103);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_104", (void*)godot_icall_0_104);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_105", (void*)godot_icall_1_105);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_106", (void*)godot_icall_3_106);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_107", (void*)godot_icall_3_107);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_108", (void*)godot_icall_2_108);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_109", (void*)godot_icall_3_109);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_110", (void*)godot_icall_1_110);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_111", (void*)godot_icall_2_111);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_112", (void*)godot_icall_1_112);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_113", (void*)godot_icall_2_113);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_114", (void*)godot_icall_1_114);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_115", (void*)godot_icall_1_115);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_116", (void*)godot_icall_3_116);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_117", (void*)godot_icall_2_117);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_118", (void*)godot_icall_1_118);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_119", (void*)godot_icall_1_119);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_120", (void*)godot_icall_2_120);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_121", (void*)godot_icall_2_121);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_122", (void*)godot_icall_1_122);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_123", (void*)godot_icall_1_123);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_124", (void*)godot_icall_4_124);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_125", (void*)godot_icall_5_125);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_126", (void*)godot_icall_4_126);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_127", (void*)godot_icall_4_127);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_128", (void*)godot_icall_4_128);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_129", (void*)godot_icall_4_129);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_130", (void*)godot_icall_3_130);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_131", (void*)godot_icall_3_131);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_132", (void*)godot_icall_5_132);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_133", (void*)godot_icall_4_133);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_134", (void*)godot_icall_4_134);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_135", (void*)godot_icall_3_135);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_136", (void*)godot_icall_4_136);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_137", (void*)godot_icall_1_137);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_138", (void*)godot_icall_1_138);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_139", (void*)godot_icall_2_139);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_140", (void*)godot_icall_1_140);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_141", (void*)godot_icall_2_141);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_142", (void*)godot_icall_3_142);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_143", (void*)godot_icall_3_143);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_144", (void*)godot_icall_1_144);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_145", (void*)godot_icall_1_145);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_146", (void*)godot_icall_1_146);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_147", (void*)godot_icall_0_147);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_148", (void*)godot_icall_4_148);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_149", (void*)godot_icall_1_149);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_150", (void*)godot_icall_1_150);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_151", (void*)godot_icall_1_151);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_152", (void*)godot_icall_1_152);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_153", (void*)godot_icall_4_153);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_154", (void*)godot_icall_0_154);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_155", (void*)godot_icall_0_155);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_156", (void*)godot_icall_1_156);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_157", (void*)godot_icall_2_157);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_158", (void*)godot_icall_2_158);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_159", (void*)godot_icall_2_159);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_160", (void*)godot_icall_3_160);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_161", (void*)godot_icall_3_161);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_162", (void*)godot_icall_2_162);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_163", (void*)godot_icall_2_163);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_164", (void*)godot_icall_1_164);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_165", (void*)godot_icall_1_165);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_166", (void*)godot_icall_1_166);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_167", (void*)godot_icall_3_167);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_168", (void*)godot_icall_1_168);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_169", (void*)godot_icall_2_169);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_170", (void*)godot_icall_2_170);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_171", (void*)godot_icall_2_171);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_172", (void*)godot_icall_2_172);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_173", (void*)godot_icall_1_173);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_174", (void*)godot_icall_2_174);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_175", (void*)godot_icall_5_175);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_176", (void*)godot_icall_3_176);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_177", (void*)godot_icall_2_177);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_178", (void*)godot_icall_2_178);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_179", (void*)godot_icall_1_179);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_180", (void*)godot_icall_1_180);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_181", (void*)godot_icall_3_181);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_182", (void*)godot_icall_2_182);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_183", (void*)godot_icall_1_183);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_184", (void*)godot_icall_3_184);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_185", (void*)godot_icall_1_185);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_186", (void*)godot_icall_3_186);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_187", (void*)godot_icall_2_187);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_188", (void*)godot_icall_2_188);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_189", (void*)godot_icall_1_189);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_190", (void*)godot_icall_3_190);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_191", (void*)godot_icall_2_191);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_192", (void*)godot_icall_2_192);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_193", (void*)godot_icall_5_193);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_194", (void*)godot_icall_2_194);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_195", (void*)godot_icall_1_195);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_196", (void*)godot_icall_3_196);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_197", (void*)godot_icall_2_197);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_198", (void*)godot_icall_2_198);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_199", (void*)godot_icall_2_199);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_200", (void*)godot_icall_2_200);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_201", (void*)godot_icall_2_201);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_202", (void*)godot_icall_2_202);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_203", (void*)godot_icall_2_203);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_204", (void*)godot_icall_1_204);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_205", (void*)godot_icall_1_205);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_206", (void*)godot_icall_2_206);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_207", (void*)godot_icall_3_207);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_208", (void*)godot_icall_2_208);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_209", (void*)godot_icall_2_209);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_210", (void*)godot_icall_3_210);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_211", (void*)godot_icall_2_211);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_212", (void*)godot_icall_2_212);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_213", (void*)godot_icall_2_213);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_214", (void*)godot_icall_2_214);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_215", (void*)godot_icall_2_215);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_216", (void*)godot_icall_3_216);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_217", (void*)godot_icall_2_217);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_218", (void*)godot_icall_3_218);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_6_219", (void*)godot_icall_6_219);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_220", (void*)godot_icall_5_220);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_221", (void*)godot_icall_3_221);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_222", (void*)godot_icall_4_222);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_7_223", (void*)godot_icall_7_223);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_8_224", (void*)godot_icall_8_224);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_11_225", (void*)godot_icall_11_225);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_7_226", (void*)godot_icall_7_226);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_7_227", (void*)godot_icall_7_227);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_8_228", (void*)godot_icall_8_228);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_229", (void*)godot_icall_3_229);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_6_230", (void*)godot_icall_6_230);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_231", (void*)godot_icall_2_231);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_232", (void*)godot_icall_2_232);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_233", (void*)godot_icall_2_233);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_234", (void*)godot_icall_3_234);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_235", (void*)godot_icall_2_235);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_236", (void*)godot_icall_2_236);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_237", (void*)godot_icall_4_237);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_238", (void*)godot_icall_4_238);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_239", (void*)godot_icall_1_239);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_240", (void*)godot_icall_3_240);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_241", (void*)godot_icall_3_241);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_242", (void*)godot_icall_1_242);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_243", (void*)godot_icall_2_243);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_244", (void*)godot_icall_4_244);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_245", (void*)godot_icall_2_245);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_246", (void*)godot_icall_4_246);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_247", (void*)godot_icall_0_247);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_248", (void*)godot_icall_1_248);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_249", (void*)godot_icall_0_249);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_250", (void*)godot_icall_3_250);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_251", (void*)godot_icall_2_251);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_252", (void*)godot_icall_3_252);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_253", (void*)godot_icall_2_253);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_254", (void*)godot_icall_3_254);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_255", (void*)godot_icall_0_255);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_256", (void*)godot_icall_0_256);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_257", (void*)godot_icall_0_257);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_258", (void*)godot_icall_2_258);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_259", (void*)godot_icall_1_259);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_260", (void*)godot_icall_1_260);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_261", (void*)godot_icall_1_261);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_262", (void*)godot_icall_1_262);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_263", (void*)godot_icall_2_263);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_264", (void*)godot_icall_1_264);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_265", (void*)godot_icall_1_265);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_266", (void*)godot_icall_1_266);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_267", (void*)godot_icall_3_267);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_268", (void*)godot_icall_2_268);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_269", (void*)godot_icall_1_269);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_270", (void*)godot_icall_2_270);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_271", (void*)godot_icall_1_271);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_272", (void*)godot_icall_3_272);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_273", (void*)godot_icall_3_273);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_274", (void*)godot_icall_2_274);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_275", (void*)godot_icall_3_275);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_276", (void*)godot_icall_2_276);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_277", (void*)godot_icall_2_277);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_278", (void*)godot_icall_1_278);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_279", (void*)godot_icall_3_279);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_280", (void*)godot_icall_2_280);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_281", (void*)godot_icall_2_281);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_282", (void*)godot_icall_1_282);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_283", (void*)godot_icall_3_283);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_284", (void*)godot_icall_2_284);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_285", (void*)godot_icall_1_285);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_286", (void*)godot_icall_3_286);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_287", (void*)godot_icall_2_287);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_288", (void*)godot_icall_3_288);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_289", (void*)godot_icall_2_289);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_290", (void*)godot_icall_3_290);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_291", (void*)godot_icall_2_291);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_292", (void*)godot_icall_4_292);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_293", (void*)godot_icall_1_293);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_294", (void*)godot_icall_4_294);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_295", (void*)godot_icall_3_295);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_296", (void*)godot_icall_2_296);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_297", (void*)godot_icall_1_297);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_298", (void*)godot_icall_4_298);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_299", (void*)godot_icall_3_299);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_300", (void*)godot_icall_2_300);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_301", (void*)godot_icall_3_301);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_302", (void*)godot_icall_2_302);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_303", (void*)godot_icall_3_303);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_304", (void*)godot_icall_2_304);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_305", (void*)godot_icall_3_305);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_306", (void*)godot_icall_2_306);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_307", (void*)godot_icall_1_307);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_308", (void*)godot_icall_4_308);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_309", (void*)godot_icall_3_309);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_310", (void*)godot_icall_4_310);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_311", (void*)godot_icall_3_311);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_312", (void*)godot_icall_1_312);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_313", (void*)godot_icall_1_313);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_314", (void*)godot_icall_3_314);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_315", (void*)godot_icall_2_315);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_316", (void*)godot_icall_1_316);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_317", (void*)godot_icall_2_317);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_318", (void*)godot_icall_1_318);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_319", (void*)godot_icall_3_319);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_320", (void*)godot_icall_3_320);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_321", (void*)godot_icall_2_321);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_322", (void*)godot_icall_3_322);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_323", (void*)godot_icall_2_323);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_324", (void*)godot_icall_1_324);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_325", (void*)godot_icall_2_325);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_326", (void*)godot_icall_1_326);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_327", (void*)godot_icall_3_327);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_328", (void*)godot_icall_2_328);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_329", (void*)godot_icall_2_329);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_330", (void*)godot_icall_1_330);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_331", (void*)godot_icall_3_331);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_332", (void*)godot_icall_2_332);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_333", (void*)godot_icall_3_333);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_334", (void*)godot_icall_2_334);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_335", (void*)godot_icall_3_335);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_336", (void*)godot_icall_5_336);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_337", (void*)godot_icall_1_337);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_338", (void*)godot_icall_3_338);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_339", (void*)godot_icall_2_339);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_340", (void*)godot_icall_3_340);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_341", (void*)godot_icall_5_341);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_342", (void*)godot_icall_4_342);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_343", (void*)godot_icall_3_343);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_344", (void*)godot_icall_2_344);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_345", (void*)godot_icall_1_345);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_346", (void*)godot_icall_1_346);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_347", (void*)godot_icall_0_347);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_348", (void*)godot_icall_0_348);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_349", (void*)godot_icall_0_349);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_350", (void*)godot_icall_0_350);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_351", (void*)godot_icall_1_351);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_352", (void*)godot_icall_0_352);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_353", (void*)godot_icall_1_353);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_354", (void*)godot_icall_0_354);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_355", (void*)godot_icall_1_355);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_356", (void*)godot_icall_0_356);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_357", (void*)godot_icall_1_357);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_358", (void*)godot_icall_0_358);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_359", (void*)godot_icall_1_359);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_360", (void*)godot_icall_1_360);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_361", (void*)godot_icall_1_361);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_362", (void*)godot_icall_0_362);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_363", (void*)godot_icall_4_363);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_364", (void*)godot_icall_4_364);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_365", (void*)godot_icall_2_365);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_366", (void*)godot_icall_1_366);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_367", (void*)godot_icall_1_367);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_368", (void*)godot_icall_0_368);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_369", (void*)godot_icall_1_369);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_370", (void*)godot_icall_1_370);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_371", (void*)godot_icall_1_371);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_372", (void*)godot_icall_2_372);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_373", (void*)godot_icall_0_373);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_374", (void*)godot_icall_4_374);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_375", (void*)godot_icall_2_375);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_376", (void*)godot_icall_3_376);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_377", (void*)godot_icall_2_377);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_378", (void*)godot_icall_1_378);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_379", (void*)godot_icall_1_379);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_380", (void*)godot_icall_1_380);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_381", (void*)godot_icall_3_381);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_382", (void*)godot_icall_1_382);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_383", (void*)godot_icall_0_383);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_384", (void*)godot_icall_1_384);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_385", (void*)godot_icall_2_385);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_386", (void*)godot_icall_3_386);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_387", (void*)godot_icall_1_387);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_388", (void*)godot_icall_0_388);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_389", (void*)godot_icall_0_389);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_390", (void*)godot_icall_0_390);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_391", (void*)godot_icall_2_391);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_392", (void*)godot_icall_1_392);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_393", (void*)godot_icall_3_393);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_394", (void*)godot_icall_3_394);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_395", (void*)godot_icall_0_395);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_396", (void*)godot_icall_0_396);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_397", (void*)godot_icall_3_397);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_398", (void*)godot_icall_1_398);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_399", (void*)godot_icall_0_399);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_400", (void*)godot_icall_1_400);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_401", (void*)godot_icall_0_401);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_402", (void*)godot_icall_1_402);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_403", (void*)godot_icall_0_403);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_404", (void*)godot_icall_1_404);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_405", (void*)godot_icall_0_405);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_406", (void*)godot_icall_1_406);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_407", (void*)godot_icall_0_407);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_408", (void*)godot_icall_1_408);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_409", (void*)godot_icall_0_409);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_410", (void*)godot_icall_0_410);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_411", (void*)godot_icall_1_411);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_412", (void*)godot_icall_2_412);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_413", (void*)godot_icall_1_413);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_414", (void*)godot_icall_0_414);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_415", (void*)godot_icall_5_415);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_6_416", (void*)godot_icall_6_416);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_7_417", (void*)godot_icall_7_417);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_418", (void*)godot_icall_0_418);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_419", (void*)godot_icall_5_419);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_420", (void*)godot_icall_1_420);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_421", (void*)godot_icall_0_421);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_422", (void*)godot_icall_0_422);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_423", (void*)godot_icall_5_423);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_424", (void*)godot_icall_4_424);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_425", (void*)godot_icall_4_425);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_426", (void*)godot_icall_3_426);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_427", (void*)godot_icall_3_427);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_428", (void*)godot_icall_4_428);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_6_429", (void*)godot_icall_6_429);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_7_430", (void*)godot_icall_7_430);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_431", (void*)godot_icall_2_431);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_6_432", (void*)godot_icall_6_432);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_6_433", (void*)godot_icall_6_433);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_6_434", (void*)godot_icall_6_434);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_435", (void*)godot_icall_5_435);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_436", (void*)godot_icall_5_436);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_437", (void*)godot_icall_3_437);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_438", (void*)godot_icall_0_438);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_439", (void*)godot_icall_1_439);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_440", (void*)godot_icall_1_440);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_441", (void*)godot_icall_2_441);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_442", (void*)godot_icall_1_442);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_443", (void*)godot_icall_1_443);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_444", (void*)godot_icall_1_444);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_445", (void*)godot_icall_0_445);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_446", (void*)godot_icall_2_446);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_447", (void*)godot_icall_3_447);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_448", (void*)godot_icall_4_448);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_449", (void*)godot_icall_2_449);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_450", (void*)godot_icall_1_450);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_451", (void*)godot_icall_4_451);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_452", (void*)godot_icall_1_452);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_453", (void*)godot_icall_0_453);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_454", (void*)godot_icall_0_454);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_455", (void*)godot_icall_0_455);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_456", (void*)godot_icall_2_456);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_457", (void*)godot_icall_2_457);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_458", (void*)godot_icall_2_458);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_459", (void*)godot_icall_2_459);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_460", (void*)godot_icall_2_460);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_461", (void*)godot_icall_1_461);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_462", (void*)godot_icall_0_462);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_463", (void*)godot_icall_1_463);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_464", (void*)godot_icall_1_464);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_465", (void*)godot_icall_0_465);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_466", (void*)godot_icall_1_466);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_467", (void*)godot_icall_2_467);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_468", (void*)godot_icall_1_468);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_469", (void*)godot_icall_2_469);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_470", (void*)godot_icall_1_470);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_471", (void*)godot_icall_0_471);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_472", (void*)godot_icall_3_472);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_473", (void*)godot_icall_3_473);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_474", (void*)godot_icall_3_474);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_475", (void*)godot_icall_0_475);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_476", (void*)godot_icall_1_476);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_477", (void*)godot_icall_0_477);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_478", (void*)godot_icall_0_478);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_479", (void*)godot_icall_0_479);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_480", (void*)godot_icall_0_480);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_481", (void*)godot_icall_0_481);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_482", (void*)godot_icall_0_482);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_483", (void*)godot_icall_1_483);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_484", (void*)godot_icall_0_484);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_485", (void*)godot_icall_1_485);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_486", (void*)godot_icall_0_486);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_487", (void*)godot_icall_1_487);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_488", (void*)godot_icall_0_488);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_489", (void*)godot_icall_0_489);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_490", (void*)godot_icall_1_490);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_491", (void*)godot_icall_0_491);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_492", (void*)godot_icall_1_492);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_493", (void*)godot_icall_0_493);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_494", (void*)godot_icall_2_494);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_495", (void*)godot_icall_1_495);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_496", (void*)godot_icall_1_496);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_497", (void*)godot_icall_0_497);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_498", (void*)godot_icall_1_498);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_499", (void*)godot_icall_1_499);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_500", (void*)godot_icall_0_500);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_501", (void*)godot_icall_2_501);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_502", (void*)godot_icall_1_502);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_503", (void*)godot_icall_0_503);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_504", (void*)godot_icall_1_504);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_505", (void*)godot_icall_0_505);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_506", (void*)godot_icall_1_506);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_507", (void*)godot_icall_1_507);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_508", (void*)godot_icall_0_508);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_509", (void*)godot_icall_1_509);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_510", (void*)godot_icall_0_510);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_511", (void*)godot_icall_0_511);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_512", (void*)godot_icall_2_512);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_513", (void*)godot_icall_1_513);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_514", (void*)godot_icall_2_514);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_515", (void*)godot_icall_2_515);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_516", (void*)godot_icall_0_516);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_517", (void*)godot_icall_1_517);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_518", (void*)godot_icall_1_518);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_519", (void*)godot_icall_0_519);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_9_520", (void*)godot_icall_9_520);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_521", (void*)godot_icall_1_521);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_522", (void*)godot_icall_1_522);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_523", (void*)godot_icall_0_523);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_524", (void*)godot_icall_4_524);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_525", (void*)godot_icall_4_525);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_526", (void*)godot_icall_4_526);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_527", (void*)godot_icall_3_527);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_528", (void*)godot_icall_2_528);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_529", (void*)godot_icall_2_529);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_530", (void*)godot_icall_2_530);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_531", (void*)godot_icall_2_531);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_532", (void*)godot_icall_0_532);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_533", (void*)godot_icall_1_533);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_534", (void*)godot_icall_0_534);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_535", (void*)godot_icall_1_535);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_536", (void*)godot_icall_0_536);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_537", (void*)godot_icall_2_537);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_538", (void*)godot_icall_0_538);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_539", (void*)godot_icall_0_539);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_540", (void*)godot_icall_0_540);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_541", (void*)godot_icall_0_541);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_542", (void*)godot_icall_3_542);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_543", (void*)godot_icall_1_543);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_544", (void*)godot_icall_1_544);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_545", (void*)godot_icall_0_545);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_546", (void*)godot_icall_0_546);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_547", (void*)godot_icall_1_547);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_548", (void*)godot_icall_0_548);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_549", (void*)godot_icall_1_549);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_550", (void*)godot_icall_0_550);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_551", (void*)godot_icall_4_551);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_552", (void*)godot_icall_3_552);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_553", (void*)godot_icall_4_553);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_554", (void*)godot_icall_3_554);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_555", (void*)godot_icall_3_555);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_556", (void*)godot_icall_1_556);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_557", (void*)godot_icall_2_557);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_558", (void*)godot_icall_0_558);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_559", (void*)godot_icall_1_559);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_560", (void*)godot_icall_1_560);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_561", (void*)godot_icall_2_561);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_562", (void*)godot_icall_1_562);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_563", (void*)godot_icall_1_563);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_564", (void*)godot_icall_3_564);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_565", (void*)godot_icall_4_565);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_566", (void*)godot_icall_4_566);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_567", (void*)godot_icall_2_567);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_568", (void*)godot_icall_1_568);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_569", (void*)godot_icall_5_569);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_570", (void*)godot_icall_3_570);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_571", (void*)godot_icall_3_571);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_572", (void*)godot_icall_5_572);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_573", (void*)godot_icall_2_573);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_574", (void*)godot_icall_3_574);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_575", (void*)godot_icall_2_575);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_576", (void*)godot_icall_1_576);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_577", (void*)godot_icall_3_577);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_578", (void*)godot_icall_0_578);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_579", (void*)godot_icall_0_579);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_580", (void*)godot_icall_0_580);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_581", (void*)godot_icall_1_581);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_582", (void*)godot_icall_1_582);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_583", (void*)godot_icall_3_583);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_584", (void*)godot_icall_0_584);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_585", (void*)godot_icall_0_585);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_586", (void*)godot_icall_0_586);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_587", (void*)godot_icall_2_587);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_588", (void*)godot_icall_3_588);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_589", (void*)godot_icall_1_589);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_590", (void*)godot_icall_2_590);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_591", (void*)godot_icall_2_591);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_592", (void*)godot_icall_2_592);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_593", (void*)godot_icall_1_593);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_594", (void*)godot_icall_3_594);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_595", (void*)godot_icall_2_595);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_596", (void*)godot_icall_4_596);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_597", (void*)godot_icall_2_597);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_598", (void*)godot_icall_1_598);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_599", (void*)godot_icall_1_599);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_600", (void*)godot_icall_0_600);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_601", (void*)godot_icall_1_601);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_602", (void*)godot_icall_0_602);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_603", (void*)godot_icall_2_603);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_8_604", (void*)godot_icall_8_604);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_8_605", (void*)godot_icall_8_605);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_8_606", (void*)godot_icall_8_606);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_9_607", (void*)godot_icall_9_607);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_9_608", (void*)godot_icall_9_608);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_9_609", (void*)godot_icall_9_609);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_9_610", (void*)godot_icall_9_610);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_611", (void*)godot_icall_0_611);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_612", (void*)godot_icall_2_612);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_613", (void*)godot_icall_1_613);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_614", (void*)godot_icall_1_614);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_615", (void*)godot_icall_0_615);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_616", (void*)godot_icall_1_616);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_617", (void*)godot_icall_1_617);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_618", (void*)godot_icall_1_618);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_619", (void*)godot_icall_3_619);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_620", (void*)godot_icall_0_620);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_621", (void*)godot_icall_1_621);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_622", (void*)godot_icall_1_622);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_623", (void*)godot_icall_0_623);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_624", (void*)godot_icall_1_624);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_625", (void*)godot_icall_0_625);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_626", (void*)godot_icall_1_626);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_627", (void*)godot_icall_0_627);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_628", (void*)godot_icall_0_628);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_629", (void*)godot_icall_1_629);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_630", (void*)godot_icall_0_630);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_631", (void*)godot_icall_1_631);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_632", (void*)godot_icall_0_632);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_633", (void*)godot_icall_1_633);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_634", (void*)godot_icall_0_634);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_635", (void*)godot_icall_1_635);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_636", (void*)godot_icall_0_636);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_637", (void*)godot_icall_1_637);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_638", (void*)godot_icall_0_638);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_639", (void*)godot_icall_0_639);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_640", (void*)godot_icall_0_640);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_641", (void*)godot_icall_1_641);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_642", (void*)godot_icall_0_642);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_643", (void*)godot_icall_1_643);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_644", (void*)godot_icall_0_644);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_645", (void*)godot_icall_0_645);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_646", (void*)godot_icall_2_646);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_647", (void*)godot_icall_1_647);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_648", (void*)godot_icall_4_648);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_649", (void*)godot_icall_1_649);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_650", (void*)godot_icall_0_650);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_651", (void*)godot_icall_2_651);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_652", (void*)godot_icall_1_652);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_653", (void*)godot_icall_1_653);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_654", (void*)godot_icall_0_654);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_655", (void*)godot_icall_0_655);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_656", (void*)godot_icall_1_656);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_657", (void*)godot_icall_3_657);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_658", (void*)godot_icall_2_658);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_659", (void*)godot_icall_3_659);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_660", (void*)godot_icall_2_660);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_661", (void*)godot_icall_1_661);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_662", (void*)godot_icall_1_662);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_663", (void*)godot_icall_0_663);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_664", (void*)godot_icall_1_664);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_665", (void*)godot_icall_0_665);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_666", (void*)godot_icall_1_666);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_667", (void*)godot_icall_0_667);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_668", (void*)godot_icall_1_668);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_669", (void*)godot_icall_0_669);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_670", (void*)godot_icall_1_670);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_671", (void*)godot_icall_0_671);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_672", (void*)godot_icall_1_672);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_673", (void*)godot_icall_0_673);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_674", (void*)godot_icall_0_674);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_675", (void*)godot_icall_1_675);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_676", (void*)godot_icall_0_676);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_677", (void*)godot_icall_1_677);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_678", (void*)godot_icall_1_678);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_679", (void*)godot_icall_0_679);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_680", (void*)godot_icall_1_680);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_681", (void*)godot_icall_0_681);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_682", (void*)godot_icall_1_682);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_683", (void*)godot_icall_0_683);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_684", (void*)godot_icall_2_684);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_685", (void*)godot_icall_3_685);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_686", (void*)godot_icall_1_686);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_687", (void*)godot_icall_2_687);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_688", (void*)godot_icall_1_688);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_689", (void*)godot_icall_2_689);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_690", (void*)godot_icall_3_690);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_691", (void*)godot_icall_2_691);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_692", (void*)godot_icall_1_692);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_693", (void*)godot_icall_3_693);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_694", (void*)godot_icall_2_694);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_695", (void*)godot_icall_3_695);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_696", (void*)godot_icall_3_696);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_697", (void*)godot_icall_1_697);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_698", (void*)godot_icall_0_698);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_699", (void*)godot_icall_1_699);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_700", (void*)godot_icall_0_700);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_701", (void*)godot_icall_1_701);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_702", (void*)godot_icall_0_702);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_703", (void*)godot_icall_1_703);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_704", (void*)godot_icall_3_704);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_705", (void*)godot_icall_3_705);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_706", (void*)godot_icall_3_706);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_707", (void*)godot_icall_1_707);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_708", (void*)godot_icall_1_708);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_709", (void*)godot_icall_2_709);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_710", (void*)godot_icall_2_710);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_711", (void*)godot_icall_1_711);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_712", (void*)godot_icall_0_712);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_713", (void*)godot_icall_2_713);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_714", (void*)godot_icall_1_714);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_715", (void*)godot_icall_1_715);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_716", (void*)godot_icall_5_716);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_717", (void*)godot_icall_2_717);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_718", (void*)godot_icall_1_718);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_719", (void*)godot_icall_1_719);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_720", (void*)godot_icall_0_720);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_721", (void*)godot_icall_1_721);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_722", (void*)godot_icall_0_722);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_723", (void*)godot_icall_0_723);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_724", (void*)godot_icall_1_724);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_725", (void*)godot_icall_0_725);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_726", (void*)godot_icall_1_726);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_727", (void*)godot_icall_0_727);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_728", (void*)godot_icall_1_728);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_729", (void*)godot_icall_0_729);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_730", (void*)godot_icall_4_730);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_731", (void*)godot_icall_2_731);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_732", (void*)godot_icall_1_732);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_733", (void*)godot_icall_2_733);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_734", (void*)godot_icall_0_734);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_735", (void*)godot_icall_2_735);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_736", (void*)godot_icall_0_736);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_737", (void*)godot_icall_1_737);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_738", (void*)godot_icall_0_738);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_739", (void*)godot_icall_2_739);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_740", (void*)godot_icall_1_740);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_741", (void*)godot_icall_2_741);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_742", (void*)godot_icall_1_742);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_743", (void*)godot_icall_2_743);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_744", (void*)godot_icall_1_744);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_745", (void*)godot_icall_2_745);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_746", (void*)godot_icall_1_746);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_747", (void*)godot_icall_2_747);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_748", (void*)godot_icall_1_748);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_749", (void*)godot_icall_2_749);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_750", (void*)godot_icall_1_750);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_751", (void*)godot_icall_2_751);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_752", (void*)godot_icall_1_752);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_753", (void*)godot_icall_2_753);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_754", (void*)godot_icall_1_754);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_755", (void*)godot_icall_2_755);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_756", (void*)godot_icall_1_756);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_757", (void*)godot_icall_0_757);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_758", (void*)godot_icall_1_758);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_759", (void*)godot_icall_0_759);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_760", (void*)godot_icall_1_760);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_761", (void*)godot_icall_0_761);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_762", (void*)godot_icall_1_762);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_763", (void*)godot_icall_0_763);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_764", (void*)godot_icall_1_764);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_765", (void*)godot_icall_0_765);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_766", (void*)godot_icall_2_766);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_767", (void*)godot_icall_0_767);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_768", (void*)godot_icall_1_768);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_769", (void*)godot_icall_0_769);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_770", (void*)godot_icall_1_770);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_771", (void*)godot_icall_0_771);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_772", (void*)godot_icall_1_772);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_773", (void*)godot_icall_0_773);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_774", (void*)godot_icall_2_774);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_775", (void*)godot_icall_1_775);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_776", (void*)godot_icall_1_776);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_777", (void*)godot_icall_2_777);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_778", (void*)godot_icall_1_778);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_779", (void*)godot_icall_2_779);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_780", (void*)godot_icall_1_780);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_781", (void*)godot_icall_0_781);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_782", (void*)godot_icall_1_782);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_783", (void*)godot_icall_0_783);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_784", (void*)godot_icall_2_784);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_785", (void*)godot_icall_3_785);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_786", (void*)godot_icall_1_786);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_787", (void*)godot_icall_5_787);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_788", (void*)godot_icall_2_788);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_789", (void*)godot_icall_1_789);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_790", (void*)godot_icall_1_790);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_791", (void*)godot_icall_0_791);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_792", (void*)godot_icall_0_792);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_793", (void*)godot_icall_3_793);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_794", (void*)godot_icall_5_794);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_795", (void*)godot_icall_3_795);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_796", (void*)godot_icall_5_796);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_797", (void*)godot_icall_1_797);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_798", (void*)godot_icall_0_798);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_799", (void*)godot_icall_2_799);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_800", (void*)godot_icall_1_800);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_801", (void*)godot_icall_1_801);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_802", (void*)godot_icall_0_802);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_803", (void*)godot_icall_1_803);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_804", (void*)godot_icall_0_804);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_805", (void*)godot_icall_0_805);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_806", (void*)godot_icall_1_806);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_807", (void*)godot_icall_0_807);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_808", (void*)godot_icall_1_808);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_809", (void*)godot_icall_0_809);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_810", (void*)godot_icall_1_810);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_811", (void*)godot_icall_0_811);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_812", (void*)godot_icall_2_812);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_813", (void*)godot_icall_1_813);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_814", (void*)godot_icall_1_814);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_815", (void*)godot_icall_3_815);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_816", (void*)godot_icall_2_816);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_817", (void*)godot_icall_5_817);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_818", (void*)godot_icall_1_818);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_819", (void*)godot_icall_1_819);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_820", (void*)godot_icall_0_820);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_821", (void*)godot_icall_1_821);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_822", (void*)godot_icall_0_822);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_823", (void*)godot_icall_1_823);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_824", (void*)godot_icall_0_824);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_825", (void*)godot_icall_1_825);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_826", (void*)godot_icall_0_826);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_7_827", (void*)godot_icall_7_827);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_828", (void*)godot_icall_5_828);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_829", (void*)godot_icall_2_829);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_830", (void*)godot_icall_1_830);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_831", (void*)godot_icall_0_831);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_832", (void*)godot_icall_1_832);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_833", (void*)godot_icall_0_833);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_834", (void*)godot_icall_4_834);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_835", (void*)godot_icall_3_835);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_836", (void*)godot_icall_1_836);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_837", (void*)godot_icall_1_837);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_838", (void*)godot_icall_0_838);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_839", (void*)godot_icall_1_839);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_840", (void*)godot_icall_0_840);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_841", (void*)godot_icall_1_841);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_842", (void*)godot_icall_0_842);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_843", (void*)godot_icall_1_843);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_844", (void*)godot_icall_0_844);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_845", (void*)godot_icall_1_845);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_846", (void*)godot_icall_0_846);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_847", (void*)godot_icall_1_847);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_848", (void*)godot_icall_0_848);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_849", (void*)godot_icall_2_849);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_850", (void*)godot_icall_1_850);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_851", (void*)godot_icall_2_851);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_852", (void*)godot_icall_1_852);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_853", (void*)godot_icall_2_853);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_854", (void*)godot_icall_1_854);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_855", (void*)godot_icall_1_855);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_856", (void*)godot_icall_0_856);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_857", (void*)godot_icall_1_857);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_858", (void*)godot_icall_0_858);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_859", (void*)godot_icall_1_859);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_860", (void*)godot_icall_0_860);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_861", (void*)godot_icall_2_861);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_862", (void*)godot_icall_1_862);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_863", (void*)godot_icall_2_863);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_864", (void*)godot_icall_1_864);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_865", (void*)godot_icall_2_865);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_866", (void*)godot_icall_1_866);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_867", (void*)godot_icall_1_867);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_868", (void*)godot_icall_0_868);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_869", (void*)godot_icall_0_869);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_870", (void*)godot_icall_0_870);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_871", (void*)godot_icall_0_871);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_872", (void*)godot_icall_1_872);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_6_873", (void*)godot_icall_6_873);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_874", (void*)godot_icall_2_874);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_875", (void*)godot_icall_3_875);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_876", (void*)godot_icall_2_876);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_877", (void*)godot_icall_2_877);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_878", (void*)godot_icall_2_878);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_879", (void*)godot_icall_1_879);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_880", (void*)godot_icall_2_880);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_881", (void*)godot_icall_2_881);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_882", (void*)godot_icall_1_882);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_883", (void*)godot_icall_1_883);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_884", (void*)godot_icall_0_884);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_885", (void*)godot_icall_1_885);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_886", (void*)godot_icall_0_886);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_887", (void*)godot_icall_4_887);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_888", (void*)godot_icall_1_888);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_889", (void*)godot_icall_0_889);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_890", (void*)godot_icall_2_890);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_891", (void*)godot_icall_5_891);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_892", (void*)godot_icall_2_892);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_893", (void*)godot_icall_1_893);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_894", (void*)godot_icall_1_894);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_895", (void*)godot_icall_2_895);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_896", (void*)godot_icall_2_896);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_897", (void*)godot_icall_1_897);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_898", (void*)godot_icall_1_898);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_899", (void*)godot_icall_0_899);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_900", (void*)godot_icall_2_900);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_901", (void*)godot_icall_1_901);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_902", (void*)godot_icall_2_902);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_903", (void*)godot_icall_1_903);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_904", (void*)godot_icall_5_904);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_905", (void*)godot_icall_4_905);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_906", (void*)godot_icall_3_906);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_907", (void*)godot_icall_3_907);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_908", (void*)godot_icall_2_908);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_909", (void*)godot_icall_3_909);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_910", (void*)godot_icall_2_910);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_911", (void*)godot_icall_1_911);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_912", (void*)godot_icall_2_912);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_913", (void*)godot_icall_2_913);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_914", (void*)godot_icall_1_914);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_915", (void*)godot_icall_3_915);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_916", (void*)godot_icall_2_916);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_917", (void*)godot_icall_2_917);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_918", (void*)godot_icall_5_918);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_919", (void*)godot_icall_5_919);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_920", (void*)godot_icall_5_920);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_921", (void*)godot_icall_2_921);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_922", (void*)godot_icall_0_922);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_923", (void*)godot_icall_0_923);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_924", (void*)godot_icall_1_924);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_925", (void*)godot_icall_2_925);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_926", (void*)godot_icall_2_926);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_927", (void*)godot_icall_4_927);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_928", (void*)godot_icall_1_928);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_929", (void*)godot_icall_0_929);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_930", (void*)godot_icall_2_930);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_931", (void*)godot_icall_1_931);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_932", (void*)godot_icall_2_932);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_933", (void*)godot_icall_2_933);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_934", (void*)godot_icall_1_934);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_935", (void*)godot_icall_0_935);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_936", (void*)godot_icall_1_936);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_937", (void*)godot_icall_0_937);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_938", (void*)godot_icall_1_938);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_939", (void*)godot_icall_0_939);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_940", (void*)godot_icall_1_940);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_941", (void*)godot_icall_0_941);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_942", (void*)godot_icall_1_942);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_943", (void*)godot_icall_0_943);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_944", (void*)godot_icall_1_944);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_945", (void*)godot_icall_0_945);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_946", (void*)godot_icall_4_946);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_947", (void*)godot_icall_2_947);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_948", (void*)godot_icall_1_948);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_949", (void*)godot_icall_2_949);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_950", (void*)godot_icall_2_950);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_951", (void*)godot_icall_0_951);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_952", (void*)godot_icall_3_952);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_953", (void*)godot_icall_3_953);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_954", (void*)godot_icall_1_954);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_955", (void*)godot_icall_2_955);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_956", (void*)godot_icall_2_956);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_957", (void*)godot_icall_1_957);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_958", (void*)godot_icall_0_958);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_959", (void*)godot_icall_2_959);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_960", (void*)godot_icall_1_960);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_961", (void*)godot_icall_1_961);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_962", (void*)godot_icall_1_962);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_963", (void*)godot_icall_1_963);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_964", (void*)godot_icall_0_964);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_965", (void*)godot_icall_2_965);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_966", (void*)godot_icall_4_966);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_967", (void*)godot_icall_4_967);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_968", (void*)godot_icall_3_968);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_969", (void*)godot_icall_4_969);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_970", (void*)godot_icall_3_970);
#ifdef TOOLS_ENABLED
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_2_971", (void*)godot_icall_2_971);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_2_972", (void*)godot_icall_2_972);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_2_973", (void*)godot_icall_2_973);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_2_974", (void*)godot_icall_2_974);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_4_975", (void*)godot_icall_4_975);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_0_976", (void*)godot_icall_0_976);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_0_977", (void*)godot_icall_0_977);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_1_978", (void*)godot_icall_1_978);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_0_979", (void*)godot_icall_0_979);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_1_980", (void*)godot_icall_1_980);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_0_981", (void*)godot_icall_0_981);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_1_982", (void*)godot_icall_1_982);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_0_983", (void*)godot_icall_0_983);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_3_984", (void*)godot_icall_3_984);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_3_985", (void*)godot_icall_3_985);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_2_986", (void*)godot_icall_2_986);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_2_987", (void*)godot_icall_2_987);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_3_988", (void*)godot_icall_3_988);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_4_989", (void*)godot_icall_4_989);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_4_990", (void*)godot_icall_4_990);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_0_991", (void*)godot_icall_0_991);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_1_992", (void*)godot_icall_1_992);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_1_993", (void*)godot_icall_1_993);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_2_994", (void*)godot_icall_2_994);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_3_995", (void*)godot_icall_3_995);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_3_996", (void*)godot_icall_3_996);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_2_997", (void*)godot_icall_2_997);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_0_998", (void*)godot_icall_0_998);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_0_999", (void*)godot_icall_0_999);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_0_1000", (void*)godot_icall_0_1000);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_0_1001", (void*)godot_icall_0_1001);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_0_1002", (void*)godot_icall_0_1002);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_2_1003", (void*)godot_icall_2_1003);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_2_1004", (void*)godot_icall_2_1004);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_3_1005", (void*)godot_icall_3_1005);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_3_1006", (void*)godot_icall_3_1006);
	mono_add_internal_call("Godot.EditorNativeCalls::godot_icall_3_1007", (void*)godot_icall_3_1007);
#endif
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_1008", (void*)godot_icall_2_1008);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_1009", (void*)godot_icall_4_1009);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_1010", (void*)godot_icall_4_1010);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_1011", (void*)godot_icall_1_1011);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_1012", (void*)godot_icall_0_1012);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_1013", (void*)godot_icall_0_1013);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_1014", (void*)godot_icall_0_1014);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_1015", (void*)godot_icall_3_1015);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_1016", (void*)godot_icall_1_1016);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_1017", (void*)godot_icall_1_1017);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_1018", (void*)godot_icall_1_1018);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_1019", (void*)godot_icall_0_1019);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_1020", (void*)godot_icall_5_1020);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_1021", (void*)godot_icall_3_1021);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_1022", (void*)godot_icall_3_1022);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_1023", (void*)godot_icall_4_1023);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_1024", (void*)godot_icall_2_1024);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_1025", (void*)godot_icall_1_1025);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_1026", (void*)godot_icall_3_1026);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_1027", (void*)godot_icall_3_1027);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_1028", (void*)godot_icall_5_1028);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_1029", (void*)godot_icall_4_1029);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_1030", (void*)godot_icall_2_1030);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_1031", (void*)godot_icall_3_1031);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_1032", (void*)godot_icall_2_1032);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_1033", (void*)godot_icall_4_1033);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_1034", (void*)godot_icall_4_1034);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_1035", (void*)godot_icall_5_1035);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_5_1036", (void*)godot_icall_5_1036);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_1037", (void*)godot_icall_3_1037);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_1038", (void*)godot_icall_2_1038);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_1039", (void*)godot_icall_1_1039);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_4_1040", (void*)godot_icall_4_1040);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_1041", (void*)godot_icall_3_1041);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_2_1042", (void*)godot_icall_2_1042);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_1043", (void*)godot_icall_3_1043);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_1044", (void*)godot_icall_0_1044);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_3_1045", (void*)godot_icall_3_1045);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_1046", (void*)godot_icall_1_1046);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_1047", (void*)godot_icall_1_1047);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_1048", (void*)godot_icall_0_1048);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_1049", (void*)godot_icall_1_1049);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_1050", (void*)godot_icall_0_1050);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_1051", (void*)godot_icall_1_1051);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_1052", (void*)godot_icall_0_1052);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_1053", (void*)godot_icall_1_1053);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_1054", (void*)godot_icall_0_1054);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_1055", (void*)godot_icall_1_1055);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_1056", (void*)godot_icall_0_1056);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_1057", (void*)godot_icall_1_1057);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_1058", (void*)godot_icall_0_1058);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_1059", (void*)godot_icall_1_1059);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_1060", (void*)godot_icall_0_1060);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_1061", (void*)godot_icall_1_1061);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_1062", (void*)godot_icall_0_1062);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_1063", (void*)godot_icall_1_1063);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_1064", (void*)godot_icall_0_1064);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_1065", (void*)godot_icall_1_1065);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_1066", (void*)godot_icall_0_1066);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_1067", (void*)godot_icall_1_1067);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_1068", (void*)godot_icall_0_1068);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_1_1069", (void*)godot_icall_1_1069);
	mono_add_internal_call("Godot.NativeCalls::godot_icall_0_1070", (void*)godot_icall_0_1070);
}
}
