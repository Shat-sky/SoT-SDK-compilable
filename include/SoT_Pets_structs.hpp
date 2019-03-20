#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_AthenaAI_classes.hpp"
#include "SoT_ActionStateMachine_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "AthenaCommons.hpp"
#include "SoT_AIModule_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Pets.PetAnimationWeighting
// 0x0008
struct FPetAnimationWeighting
{
	TEnumAsByte<EAthenaAnimationPetRoamingState>       AnimationState;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Weighting;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Pets.WeightedPetAnimationSelector
// 0x00A0
struct FWeightedPetAnimationSelector
{
	TArray<struct FPetAnimationWeighting>              Weightings;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x90];                                      // 0x0010(0x0090) MISSED OFFSET
};

// ScriptStruct Pets.PetHangoutSpotParams
// 0x00B8
struct FPetHangoutSpotParams
{
	class UClass*                                      PetType;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFloatRange                                 HangoutTime;                                              // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeightedPetAnimationSelector               AnimationSelector;                                        // 0x0018(0x00A0) (Edit, DisableEditOnInstance)
};

// ScriptStruct Pets.HangoutSpotParams
// 0x0020
struct FHangoutSpotParams
{
	struct FName                                       HangoutSpotName;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Weight;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FPetHangoutSpotParams>               PetParams;                                                // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Pets.HangoutSpotId
// 0x0008
struct FHangoutSpotId
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pets.HangoutSpotPosition
// 0x0060
struct FHangoutSpotPosition
{
	struct FHangoutSpotId                              Id;                                                       // 0x0000(0x0008) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (Edit, IsPlainOldData)
	TEnumAsByte<EShipDeck>                             ShipDeck;                                                 // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	class APawn*                                       Occupier;                                                 // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0050(0x0010) MISSED OFFSET
};

// ScriptStruct Pets.PetCustomisation
// 0x0018
struct FPetCustomisation
{
	class FString                                      PetName;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FAIPartId                                   PetPartId;                                                // 0x0010(0x0008) (Edit, DisableEditOnInstance)
};

// ScriptStruct Pets.PetListingTypeEntry
// 0x0020
struct FPetListingTypeEntry
{
	struct FStringClassReference                       PetType;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FPetCustomisation>                   PetCustomisations;                                        // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Pets.PetsServiceParams
// 0x0028
struct FPetsServiceParams
{
	uint32_t                                           MaximumDistanceFromOwner;                                 // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	uint32_t                                           ProximityRadius;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxPetsInProximity;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RespawnRequestTimeout;                                    // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnTimeDelay;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinPetProximityLifespan;                                  // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxPetProximityLifespan;                                  // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinPetProximityRespawnDelay;                              // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxPetProximityRespawnDelay;                              // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeldPetDespawnDelay;                                      // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Pets.PetRelationship
// 0x0020
struct FPetRelationship
{
	class APetItemInfo*                                PetInfo;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct Pets.ReactStateMapping
// 0x00C8
struct FReactStateMapping
{
	struct FName                                       AnimationID;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanTimeout;                                               // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              AnimationTimeout;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeightedPetAnimationSelector               PetStateSelector;                                         // 0x0010(0x00A0) (Edit, DisableEditOnInstance)
	float                                              AnimationChance;                                          // 0x00B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFloatRange                                 AnimationDelay;                                           // 0x00B4(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
};

// ScriptStruct Pets.WeightedPetAnimation
// 0x0010
struct FWeightedPetAnimation
{
	class UAnimSequence*                               Animation;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Weighting;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Pets.WeightedPetAnimations
// 0x00A0
struct FWeightedPetAnimations
{
	TArray<struct FWeightedPetAnimation>               Weightings;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x90];                                      // 0x0010(0x0090) MISSED OFFSET
};

// ScriptStruct Pets.EventPetDropped
// 0x0001
struct FEventPetDropped
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Pets.EventPetPickedUp
// 0x0001
struct FEventPetPickedUp
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Pets.EventHangoutSpotMadeAvailable
// 0x0050
struct FEventHangoutSpotMadeAvailable
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Pets.EventHangoutSpotMadeUnavailable
// 0x0050
struct FEventHangoutSpotMadeUnavailable
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Pets.PetsWorldSettingsParams
// 0x0001
struct FPetsWorldSettingsParams
{
	bool                                               PetsOnStartEnabled;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Pets.PetDespawnActionStateParams
// 0x0040
struct FPetDespawnActionStateParams
{
	float                                              TakeOffHeight;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TakeOffTime;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalGhostShaderTime;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeToTriggerVFX;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     DespawnVFX;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DespawnVFXColour;                                         // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 DespawnSFX;                                               // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 StopDespawnSFX;                                           // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalDespawningTime;                                      // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct Pets.PetSpawnActionStateConstructionInfo
// 0x0000 (0x0030 - 0x0030)
struct FPetSpawnActionStateConstructionInfo : public FActorActionStateConstructionInfo
{

};

// ScriptStruct Pets.PetSpawnActionStateParams
// 0x0040
struct FPetSpawnActionStateParams
{
	float                                              LandingHeight;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LandingTime;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalGhostShaderTime;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeToTriggerVFX;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     SpawnVFX;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SpawnVFXColour;                                           // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 SpawnSFX;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 StopSpawnSFX;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalSpawningTime;                                        // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
