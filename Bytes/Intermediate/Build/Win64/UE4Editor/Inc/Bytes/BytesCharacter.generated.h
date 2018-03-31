// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BYTES_BytesCharacter_generated_h
#error "BytesCharacter.generated.h already included, missing '#pragma once' in BytesCharacter.h"
#endif
#define BYTES_BytesCharacter_generated_h

#define Bytes_Source_Bytes_BytesCharacter_h_14_RPC_WRAPPERS
#define Bytes_Source_Bytes_BytesCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Bytes_Source_Bytes_BytesCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABytesCharacter(); \
	friend BYTES_API class UClass* Z_Construct_UClass_ABytesCharacter(); \
public: \
	DECLARE_CLASS(ABytesCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Bytes"), NO_API) \
	DECLARE_SERIALIZER(ABytesCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Bytes_Source_Bytes_BytesCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABytesCharacter(); \
	friend BYTES_API class UClass* Z_Construct_UClass_ABytesCharacter(); \
public: \
	DECLARE_CLASS(ABytesCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Bytes"), NO_API) \
	DECLARE_SERIALIZER(ABytesCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Bytes_Source_Bytes_BytesCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABytesCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABytesCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABytesCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABytesCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABytesCharacter(ABytesCharacter&&); \
	NO_API ABytesCharacter(const ABytesCharacter&); \
public:


#define Bytes_Source_Bytes_BytesCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABytesCharacter(ABytesCharacter&&); \
	NO_API ABytesCharacter(const ABytesCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABytesCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABytesCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABytesCharacter)


#define Bytes_Source_Bytes_BytesCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ABytesCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ABytesCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ABytesCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(ABytesCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(ABytesCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ABytesCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ABytesCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ABytesCharacter, L_MotionController); }


#define Bytes_Source_Bytes_BytesCharacter_h_11_PROLOG
#define Bytes_Source_Bytes_BytesCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bytes_Source_Bytes_BytesCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Bytes_Source_Bytes_BytesCharacter_h_14_RPC_WRAPPERS \
	Bytes_Source_Bytes_BytesCharacter_h_14_INCLASS \
	Bytes_Source_Bytes_BytesCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bytes_Source_Bytes_BytesCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bytes_Source_Bytes_BytesCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Bytes_Source_Bytes_BytesCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Bytes_Source_Bytes_BytesCharacter_h_14_INCLASS_NO_PURE_DECLS \
	Bytes_Source_Bytes_BytesCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Bytes_Source_Bytes_BytesCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
