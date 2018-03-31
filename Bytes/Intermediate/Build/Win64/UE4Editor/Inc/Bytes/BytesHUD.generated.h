// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BYTES_BytesHUD_generated_h
#error "BytesHUD.generated.h already included, missing '#pragma once' in BytesHUD.h"
#endif
#define BYTES_BytesHUD_generated_h

#define Bytes_Source_Bytes_BytesHUD_h_12_RPC_WRAPPERS
#define Bytes_Source_Bytes_BytesHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Bytes_Source_Bytes_BytesHUD_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABytesHUD(); \
	friend BYTES_API class UClass* Z_Construct_UClass_ABytesHUD(); \
public: \
	DECLARE_CLASS(ABytesHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/Bytes"), NO_API) \
	DECLARE_SERIALIZER(ABytesHUD) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Bytes_Source_Bytes_BytesHUD_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABytesHUD(); \
	friend BYTES_API class UClass* Z_Construct_UClass_ABytesHUD(); \
public: \
	DECLARE_CLASS(ABytesHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/Bytes"), NO_API) \
	DECLARE_SERIALIZER(ABytesHUD) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Bytes_Source_Bytes_BytesHUD_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABytesHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABytesHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABytesHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABytesHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABytesHUD(ABytesHUD&&); \
	NO_API ABytesHUD(const ABytesHUD&); \
public:


#define Bytes_Source_Bytes_BytesHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABytesHUD(ABytesHUD&&); \
	NO_API ABytesHUD(const ABytesHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABytesHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABytesHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABytesHUD)


#define Bytes_Source_Bytes_BytesHUD_h_12_PRIVATE_PROPERTY_OFFSET
#define Bytes_Source_Bytes_BytesHUD_h_9_PROLOG
#define Bytes_Source_Bytes_BytesHUD_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bytes_Source_Bytes_BytesHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	Bytes_Source_Bytes_BytesHUD_h_12_RPC_WRAPPERS \
	Bytes_Source_Bytes_BytesHUD_h_12_INCLASS \
	Bytes_Source_Bytes_BytesHUD_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bytes_Source_Bytes_BytesHUD_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bytes_Source_Bytes_BytesHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	Bytes_Source_Bytes_BytesHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Bytes_Source_Bytes_BytesHUD_h_12_INCLASS_NO_PURE_DECLS \
	Bytes_Source_Bytes_BytesHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Bytes_Source_Bytes_BytesHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
