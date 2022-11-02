// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XunFei/Public/SpeechActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeechActor() {}
// Cross Module References
	XUNFEI_API UClass* Z_Construct_UClass_ASpeechActor_NoRegister();
	XUNFEI_API UClass* Z_Construct_UClass_ASpeechActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_XunFei();
// End Cross Module References
	DEFINE_FUNCTION(ASpeechActor::execSpeechResult)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->SpeechResult();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpeechActor::execSpeechQuit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpeechQuit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpeechActor::execSpeechStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpeechStop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpeechActor::execSpeechOpen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpeechOpen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpeechActor::execSpeechInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpeechInit();
		P_NATIVE_END;
	}
	void ASpeechActor::StaticRegisterNativesASpeechActor()
	{
		UClass* Class = ASpeechActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpeechInit", &ASpeechActor::execSpeechInit },
			{ "SpeechOpen", &ASpeechActor::execSpeechOpen },
			{ "SpeechQuit", &ASpeechActor::execSpeechQuit },
			{ "SpeechResult", &ASpeechActor::execSpeechResult },
			{ "SpeechStop", &ASpeechActor::execSpeechStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpeechActor_SpeechInit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpeechActor_SpeechInit_Statics::Function_MetaDataParams[] = {
		{ "Category", "XunFei" },
		{ "DisplayName", "SpeechInit" },
		{ "Keywords", "Speech Recognition Initialization" },
		{ "ModuleRelativePath", "Public/SpeechActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpeechActor_SpeechInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpeechActor, nullptr, "SpeechInit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpeechActor_SpeechInit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpeechActor_SpeechInit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpeechActor_SpeechInit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpeechActor_SpeechInit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpeechActor_SpeechOpen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpeechActor_SpeechOpen_Statics::Function_MetaDataParams[] = {
		{ "Category", "XunFei" },
		{ "DisplayName", "SpeechOpen" },
		{ "Keywords", "Speech Recognition Open" },
		{ "ModuleRelativePath", "Public/SpeechActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpeechActor_SpeechOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpeechActor, nullptr, "SpeechOpen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpeechActor_SpeechOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpeechActor_SpeechOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpeechActor_SpeechOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpeechActor_SpeechOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpeechActor_SpeechQuit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpeechActor_SpeechQuit_Statics::Function_MetaDataParams[] = {
		{ "Category", "XunFei" },
		{ "DisplayName", "SpeechQuit" },
		{ "Keywords", "Speech Recognition Quit" },
		{ "ModuleRelativePath", "Public/SpeechActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpeechActor_SpeechQuit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpeechActor, nullptr, "SpeechQuit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpeechActor_SpeechQuit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpeechActor_SpeechQuit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpeechActor_SpeechQuit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpeechActor_SpeechQuit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpeechActor_SpeechResult_Statics
	{
		struct SpeechActor_eventSpeechResult_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASpeechActor_SpeechResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpeechActor_eventSpeechResult_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpeechActor_SpeechResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpeechActor_SpeechResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpeechActor_SpeechResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "XunFei" },
		{ "DisplayName", "SpeechResult" },
		{ "Keywords", "Speech Recognition GetResult" },
		{ "ModuleRelativePath", "Public/SpeechActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpeechActor_SpeechResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpeechActor, nullptr, "SpeechResult", nullptr, nullptr, sizeof(SpeechActor_eventSpeechResult_Parms), Z_Construct_UFunction_ASpeechActor_SpeechResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpeechActor_SpeechResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpeechActor_SpeechResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpeechActor_SpeechResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpeechActor_SpeechResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpeechActor_SpeechResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpeechActor_SpeechStop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpeechActor_SpeechStop_Statics::Function_MetaDataParams[] = {
		{ "Category", "XunFei" },
		{ "DisplayName", "SpeechStop" },
		{ "Keywords", "Speech Recognition Stop" },
		{ "ModuleRelativePath", "Public/SpeechActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpeechActor_SpeechStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpeechActor, nullptr, "SpeechStop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpeechActor_SpeechStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpeechActor_SpeechStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpeechActor_SpeechStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpeechActor_SpeechStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpeechActor_NoRegister()
	{
		return ASpeechActor::StaticClass();
	}
	struct Z_Construct_UClass_ASpeechActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpeechActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_XunFei,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpeechActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpeechActor_SpeechInit, "SpeechInit" }, // 4268558022
		{ &Z_Construct_UFunction_ASpeechActor_SpeechOpen, "SpeechOpen" }, // 1777165229
		{ &Z_Construct_UFunction_ASpeechActor_SpeechQuit, "SpeechQuit" }, // 3981305567
		{ &Z_Construct_UFunction_ASpeechActor_SpeechResult, "SpeechResult" }, // 4012105381
		{ &Z_Construct_UFunction_ASpeechActor_SpeechStop, "SpeechStop" }, // 2902636445
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpeechActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpeechActor.h" },
		{ "ModuleRelativePath", "Public/SpeechActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpeechActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpeechActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpeechActor_Statics::ClassParams = {
		&ASpeechActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpeechActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpeechActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpeechActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpeechActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpeechActor, 1981835445);
	template<> XUNFEI_API UClass* StaticClass<ASpeechActor>()
	{
		return ASpeechActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpeechActor(Z_Construct_UClass_ASpeechActor, &ASpeechActor::StaticClass, TEXT("/Script/XunFei"), TEXT("ASpeechActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpeechActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
