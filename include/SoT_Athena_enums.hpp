#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Athena.EHealthChangedReason
enum class EHealthChangedReason : uint8_t
{
	EHealthChangedReason__NoChange = 0,
	EHealthChangedReason__Test     = 1,
	EHealthChangedReason__Reset    = 2,
	EHealthChangedReason__CannonProjectile = 3,
	EHealthChangedReason__CannonBallSplashDamage = 4,
	EHealthChangedReason__FallDamage = 5,
	EHealthChangedReason__HealedFromFood = 6,
	EHealthChangedReason__Drowning = 7,
	EHealthChangedReason__DamagedBySwimmingCreature = 8,
	EHealthChangedReason__StruckByLightning = 9,
	EHealthChangedReason__Blunderbuss_Default = 10,
	EHealthChangedReason__Pistol_Default = 11,
	EHealthChangedReason__EyeOfReach_Default = 12,
	EHealthChangedReason__Cutlass  = 13,
	EHealthChangedReason__GunpowderBarrelExplosion = 14,
	EHealthChangedReason__IngestedByKrakenTentacle = 15,
	EHealthChangedReason__PowerSlammedByKrakenTentacle = 16,
	EHealthChangedReason__StarvedToDeath = 17,
	EHealthChangedReason__SkeletonFormsHeal = 18,
	EHealthChangedReason__Venom    = 19,
	EHealthChangedReason__Fire     = 20,
	EHealthChangedReason__Emote    = 21,
	EHealthChangedReason__TinySharkBite = 22,
	EHealthChangedReason__SunkenCurseSelfHeal = 23,
	EHealthChangedReason__SunkenCurseDamage = 24,
	EHealthChangedReason__TinySharkRespawn = 25,
	EHealthChangedReason__Lava     = 26,
	EHealthChangedReason__Boiling  = 27,
	EHealthChangedReason__StateTransfer = 28,
	EHealthChangedReason__Fragile  = 29,
	EHealthChangedReason__Rainfall = 30,
	EHealthChangedReason__Submerged = 31,
	EHealthChangedReason__LiquidProjectile = 32,
	EHealthChangedReason__Dry      = 33,
	EHealthChangedReason__StrainDamage = 34,
	EHealthChangedReason__VolcanoInstantKill = 35,
	EHealthChangedReason__VolcanicRock = 36,
	EHealthChangedReason__DevilsShroud = 37,
	EHealthChangedReason__Regeneration = 38,
	EHealthChangedReason__HarpoonProjectile = 39,
	EHealthChangedReason__Mechanism = 40,
	EHealthChangedReason__KnockbackAIAbility = 41,
	EHealthChangedReason__SpikePit = 42,
	EHealthChangedReason__MAX      = 43,
	EHealthChangedReason__EHealthChangedReason_MAX = 44
};


// Enum Athena.EShipPartCustomizationErrorCode
enum class EShipPartCustomizationErrorCode : uint8_t
{
	EShipPartCustomizationErrorCode__AlreadyInProgress = 0,
	EShipPartCustomizationErrorCode__FailedToCustomize = 1,
	EShipPartCustomizationErrorCode__InvalidParameters = 2,
	EShipPartCustomizationErrorCode__EShipPartCustomizationErrorCode_MAX = 3
};


// Enum Athena.ERequestState
enum class ERequestState : uint8_t
{
	ERequestState__Invalid         = 0,
	ERequestState__Waiting         = 1,
	ERequestState__Complete        = 2,
	ERequestState__Timeout         = 3,
	ERequestState__Cancelled       = 4,
	ERequestState__ERequestState_MAX = 5
};


// Enum Athena.ECharacterDeathType
enum class ECharacterDeathType : uint8_t
{
	ECharacterDeathType__Invalid   = 0,
	ECharacterDeathType__Killed    = 1,
	ECharacterDeathType__Despawn   = 2,
	ECharacterDeathType__OwnershipRemoved = 3,
	ECharacterDeathType__ECharacterDeathType_MAX = 4
};


// Enum Athena.EAthenaAITeam
enum class EAthenaAITeam : uint8_t
{
	Players                        = 0,
	Skeletons                      = 1,
	Fauna_Chickens                 = 2,
	Fauna_Pigs                     = 3,
	Fauna_Snakes                   = 4,
	NeutralSwimmingCreature        = 5,
	Sharks                         = 6,
	TinyShark                      = 7,
	Kraken                         = 8,
	NeutralCreatureCharacters      = 9,
	Max                            = 10,
	EAthenaAITeam_MAX              = 11
};


// Enum Athena.EControllableObjectType
enum class EControllableObjectType : uint8_t
{
	EControllableObjectType__None  = 0,
	EControllableObjectType__Wheel = 1,
	EControllableObjectType__CapstanArm = 2,
	EControllableObjectType__SailHoist = 3,
	EControllableObjectType__SailAngle = 4,
	EControllableObjectType__Cannon = 5,
	EControllableObjectType__MapTable = 6,
	EControllableObjectType__Tentacle = 7,
	EControllableObjectType__Ladder = 8,
	EControllableObjectType__SkeletonShipWheel = 9,
	EControllableObjectType__Oars  = 10,
	EControllableObjectType__Seat  = 11,
	EControllableObjectType__HarpoonLauncher = 12,
	EControllableObjectType__WaterPump = 13,
	EControllableObjectType__EControllableObjectType_MAX = 14
};


// Enum Athena.ECameraLookatAnimationType
enum class ECameraLookatAnimationType : uint8_t
{
	ECameraLookatAnimationType__Default = 0,
	ECameraLookatAnimationType__Wheel = 1,
	ECameraLookatAnimationType__Capstan = 2,
	ECameraLookatAnimationType__Sail = 3,
	ECameraLookatAnimationType__Tentacle = 4,
	ECameraLookatAnimationType__Ladder = 5,
	ECameraLookatAnimationType__Sitting = 6,
	ECameraLookatAnimationType__ECameraLookatAnimationType_MAX = 7
};


// Enum Athena.ELookAtRotationType
enum class ELookAtRotationType : uint8_t
{
	ELookAtRotationType__Rate      = 0,
	ELookAtRotationType__Raw       = 1,
	ELookAtRotationType__ELookAtRotationType_MAX = 2
};


// Enum Athena.EIKFootPlantingState
enum class EIKFootPlantingState : uint8_t
{
	EIKFootPlantingState__On       = 0,
	EIKFootPlantingState__Off      = 1,
	EIKFootPlantingState__EIKFootPlantingState_MAX = 2
};


// Enum Athena.EIKSolverType
enum class EIKSolverType : uint8_t
{
	EIKSolverType__NormalSolver    = 0,
	EIKSolverType__LODSolver       = 1,
	EIKSolverType__EIKSolverType_MAX = 2
};


// Enum Athena.EIKState
enum class EIKState : uint8_t
{
	EIKState__On                   = 0,
	EIKState__Off                  = 1,
	EIKState__EIKState_MAX         = 2
};


// Enum Athena.EAthenaAnimationSocketGroupCharacterSize
enum class EAthenaAnimationSocketGroupCharacterSize : uint8_t
{
	EAthenaAnimationSocketGroupCharacterSize__Default = 0,
	EAthenaAnimationSocketGroupCharacterSize__Large = 1,
	EAthenaAnimationSocketGroupCharacterSize__Thin = 2,
	EAthenaAnimationSocketGroupCharacterSize__EAthenaAnimationSocketGroupCharacterSize_MAX = 3
};


// Enum Athena.EAthenaAnimationSocketGroup
enum class EAthenaAnimationSocketGroup : uint8_t
{
	EAthenaAnimationSocketGroup__Male = 0,
	EAthenaAnimationSocketGroup__Female = 1,
	EAthenaAnimationSocketGroup__EAthenaAnimationSocketGroup_MAX = 2
};


// Enum Athena.EWieldedItemAnimationState
enum class EWieldedItemAnimationState : uint8_t
{
	EWieldedItemAnimationState__Equipping = 0,
	EWieldedItemAnimationState__Unequipping = 1,
	EWieldedItemAnimationState__Idle = 2,
	EWieldedItemAnimationState__Unequipped = 3,
	EWieldedItemAnimationState__ContinuousUse = 4,
	EWieldedItemAnimationState__OutOfContinuousUse = 5,
	EWieldedItemAnimationState__OneShot = 6,
	EWieldedItemAnimationState__ComplexOneShot = 7,
	EWieldedItemAnimationState__Blocking = 8,
	EWieldedItemAnimationState__EWieldedItemAnimationState_MAX = 9
};


// Enum Athena.EFishingState
enum class EFishingState : uint8_t
{
	EFishingState__None            = 0,
	EFishingState__Casting         = 1,
	EFishingState__CastForwards    = 2,
	EFishingState__CastSuccess     = 3,
	EFishingState__CastFailed      = 4,
	EFishingState__Fishing         = 5,
	EFishingState__IntoFighting    = 6,
	EFishingState__Fighting        = 7,
	EFishingState__Success         = 8,
	EFishingState__Failure         = 9,
	EFishingState__EFishingState_MAX = 10
};


// Enum Athena.EAnimationWaterPumpState
enum class EAnimationWaterPumpState : uint8_t
{
	EAnimationWaterPumpState__None = 0,
	EAnimationWaterPumpState__PumpForwards = 1,
	EAnimationWaterPumpState__PumpBackwards = 2,
	EAnimationWaterPumpState__ExitPumping = 3,
	EAnimationWaterPumpState__EAnimationWaterPumpState_MAX = 4
};


// Enum Athena.ERowBraking
enum class ERowBraking : uint8_t
{
	ERowBraking__None              = 0,
	ERowBraking__BrakeLeft         = 1,
	ERowBraking__BrakeRight        = 2,
	ERowBraking__BrakeBoth         = 3,
	ERowBraking__ERowBraking_MAX   = 4
};


// Enum Athena.ESkeletonShipCaptainDockedAnimationState
enum class ESkeletonShipCaptainDockedAnimationState : uint8_t
{
	ESkeletonShipCaptainDockedAnimationState__None = 0,
	ESkeletonShipCaptainDockedAnimationState__Taunt = 1,
	ESkeletonShipCaptainDockedAnimationState__Ram = 2,
	ESkeletonShipCaptainDockedAnimationState__RamImpact = 3,
	ESkeletonShipCaptainDockedAnimationState__ESkeletonShipCaptainDockedAnimationState_MAX = 4
};


// Enum Athena.ECharacterHitReactionAnimType
enum class ECharacterHitReactionAnimType : uint8_t
{
	ECharacterHitReactionAnimType__Full = 0,
	ECharacterHitReactionAnimType__Flinch = 1,
	ECharacterHitReactionAnimType__None = 2,
	ECharacterHitReactionAnimType__ECharacterHitReactionAnimType_MAX = 3
};


// Enum Athena.EKnockbackAnimDirection
enum class EKnockbackAnimDirection : uint8_t
{
	EKnockbackAnimDirection__Forwards = 0,
	EKnockbackAnimDirection__Backwards = 1,
	EKnockbackAnimDirection__EKnockbackAnimDirection_MAX = 2
};


// Enum Athena.ESkeletonActiveAnimSystem
enum class ESkeletonActiveAnimSystem : uint8_t
{
	ESkeletonActiveAnimSystem__Sensing = 0,
	ESkeletonActiveAnimSystem__EmoteAction = 1,
	ESkeletonActiveAnimSystem__ESkeletonActiveAnimSystem_MAX = 2
};


// Enum Athena.ESkeletonEmoteActionState
enum class ESkeletonEmoteActionState : uint8_t
{
	ESkeletonEmoteActionState__None = 0,
	ESkeletonEmoteActionState__Taunt = 1,
	ESkeletonEmoteActionState__Cheer = 2,
	ESkeletonEmoteActionState__ESkeletonEmoteActionState_MAX = 3
};


// Enum Athena.ESkeletonSensingState
enum class ESkeletonSensingState : uint8_t
{
	ESkeletonSensingState__None    = 0,
	ESkeletonSensingState__InitialReaction = 1,
	ESkeletonSensingState__Searching = 2,
	ESkeletonSensingState__AlertingOthers = 3,
	ESkeletonSensingState__Pursuit = 4,
	ESkeletonSensingState__ESkeletonSensingState_MAX = 5
};


// Enum Athena.EInteractionObject
enum class EInteractionObject : uint8_t
{
	EInteractionObject__None       = 0,
	EInteractionObject__Shop       = 1,
	EInteractionObject__Chest      = 2,
	EInteractionObject__Barrel     = 3,
	EInteractionObject__EInteractionObject_MAX = 4
};


// Enum Athena.EMeleeSpecialState
enum class EMeleeSpecialState : uint8_t
{
	EMeleeSpecialState__None       = 0,
	EMeleeSpecialState__Lunge      = 1,
	EMeleeSpecialState__Knockback  = 2,
	EMeleeSpecialState__Stunned    = 3,
	EMeleeSpecialState__Dodge      = 4,
	EMeleeSpecialState__MAX        = 5,
	EMeleeSpecialState__EMeleeSpecialState_MAX = 6
};


// Enum Athena.EEmoteSequenceType
enum class EEmoteSequenceType : uint8_t
{
	EEmoteSequenceType__Continuous = 0,
	EEmoteSequenceType__OneShot    = 1,
	EEmoteSequenceType__EEmoteSequenceType_MAX = 2
};


// Enum Athena.EArmOverlayFlags
enum class EArmOverlayFlags : uint8_t
{
	EArmOverlayFlags__RightArmOnly = 0,
	EArmOverlayFlags__FullBody     = 1,
	EArmOverlayFlags__UpperBody    = 2,
	EArmOverlayFlags__UpperBodyLeft = 3,
	EArmOverlayFlags__UpperBodyRight = 4,
	EArmOverlayFlags__TwoHanded    = 5,
	EArmOverlayFlags__EArmOverlayFlags_MAX = 6
};


// Enum Athena.ELocomotionType
enum class ELocomotionType : uint8_t
{
	ELocomotionType__Standard      = 0,
	ELocomotionType__Limp          = 1,
	ELocomotionType__Drunk         = 2,
	ELocomotionType__PegLeg        = 3,
	ELocomotionType__Combat        = 4,
	ELocomotionType__HotCoals      = 5,
	ELocomotionType__MAX           = 6,
	ELocomotionType__ELocomotionType_MAX = 7
};


// Enum Athena.EItemPassiveState
enum class EItemPassiveState : uint8_t
{
	EItemPassiveState__Idle        = 0,
	EItemPassiveState__Locomotion  = 1,
	EItemPassiveState__Jumping     = 2,
	EItemPassiveState__Turning     = 3,
	EItemPassiveState__Swimming    = 4,
	EItemPassiveState__EItemPassiveState_MAX = 5
};


// Enum Athena.EFacialPriority
enum class EFacialPriority : uint8_t
{
	EFacialPriority__Low           = 0,
	EFacialPriority__Medium        = 1,
	EFacialPriority__High          = 2,
	EFacialPriority__MustPlay      = 3,
	EFacialPriority__EFacialPriority_MAX = 4
};


// Enum Athena.EStairAnimations
enum class EStairAnimations : uint8_t
{
	EStairAnimations__UpLeft       = 0,
	EStairAnimations__UpRight      = 1,
	EStairAnimations__DownLeft     = 2,
	EStairAnimations__DownRight    = 3,
	EStairAnimations__EStairAnimations_MAX = 4
};


// Enum Athena.EContinuousUseID
enum class EContinuousUseID : uint8_t
{
	EContinuousUseID__In           = 0,
	EContinuousUseID__Out          = 1,
	EContinuousUseID__EContinuousUseID_MAX = 2
};


// Enum Athena.EContinuousUseOverride
enum class EContinuousUseOverride : uint8_t
{
	EContinuousUseOverride__None   = 0,
	EContinuousUseOverride__ForcePrimary = 1,
	EContinuousUseOverride__ForceSecondary = 2,
	EContinuousUseOverride__EContinuousUseOverride_MAX = 3
};


// Enum Athena.EObjectPitchTargetingStates
enum class EObjectPitchTargetingStates : uint8_t
{
	EObjectPitchTargetingStates__None = 0,
	EObjectPitchTargetingStates__StandardPassive = 1,
	EObjectPitchTargetingStates__StandardWater = 2,
	EObjectPitchTargetingStates__Action = 3,
	EObjectPitchTargetingStates__Action_1_Water = 4,
	EObjectPitchTargetingStates__Action01 = 5,
	EObjectPitchTargetingStates__Action_2_Water = 6,
	EObjectPitchTargetingStates__EObjectPitchTargetingStates_MAX = 7
};


// Enum Athena.EObjectPitchTargetingLimbs
enum class EObjectPitchTargetingLimbs : uint8_t
{
	EObjectPitchTargetingLimbs__None = 0,
	EObjectPitchTargetingLimbs__RightArm = 1,
	EObjectPitchTargetingLimbs__LeftArm = 2,
	EObjectPitchTargetingLimbs__BothArms = 3,
	EObjectPitchTargetingLimbs__EObjectPitchTargetingLimbs_MAX = 4
};


// Enum Athena.EWieldAnimationGraph
enum class EWieldAnimationGraph : uint8_t
{
	EWieldAnimationGraph__ThirdPerson = 0,
	EWieldAnimationGraph__FirstPerson = 1,
	EWieldAnimationGraph__EWieldAnimationGraph_MAX = 2
};


// Enum Athena.EWieldAnimationLocation
enum class EWieldAnimationLocation : uint8_t
{
	EWieldAnimationLocation__Left  = 0,
	EWieldAnimationLocation__Right = 1,
	EWieldAnimationLocation__Floating = 2,
	EWieldAnimationLocation__LF_CAMERA_IK_HAND__Skeleton = 3,
	EWieldAnimationLocation__RT_CAMERA_IK_HAND__Skeleton = 4,
	EWieldAnimationLocation__LF_IK_HAND__Skeleton = 5,
	EWieldAnimationLocation__RT_IK_HAND__Skeleton = 6,
	EWieldAnimationLocation__Total = 7,
	EWieldAnimationLocation__EWieldAnimationLocation_MAX = 8
};


// Enum Athena.EItemBlockingSubState
enum class EItemBlockingSubState : uint8_t
{
	EItemBlockingSubState__None    = 0,
	EItemBlockingSubState__Main    = 1,
	EItemBlockingSubState__Feedback = 2,
	EItemBlockingSubState__InFeedback = 3,
	EItemBlockingSubState__EItemBlockingSubState_MAX = 4
};


// Enum Athena.EComplexOneShotSubState
enum class EComplexOneShotSubState : uint8_t
{
	EComplexOneShotSubState__WarmUp = 0,
	EComplexOneShotSubState__WarmUpFromBlock = 1,
	EComplexOneShotSubState__Action = 2,
	EComplexOneShotSubState__Recover = 3,
	EComplexOneShotSubState__HeavyAttackStun = 4,
	EComplexOneShotSubState__EComplexOneShotSubState_MAX = 5
};


// Enum Athena.EAthenaAnimationCapstanState
enum class EAthenaAnimationCapstanState : uint8_t
{
	EAthenaAnimationCapstanState__Neutral = 0,
	EAthenaAnimationCapstanState__Positive = 1,
	EAthenaAnimationCapstanState__Negative = 2,
	EAthenaAnimationCapstanState__EAthenaAnimationCapstanState_MAX = 3
};


// Enum Athena.EAthenaAnimationJumpingState
enum class EAthenaAnimationJumpingState : uint8_t
{
	EAthenaAnimationJumpingState__None = 0,
	EAthenaAnimationJumpingState__Jumping = 1,
	EAthenaAnimationJumpingState__Falling = 2,
	EAthenaAnimationJumpingState__Impact = 3,
	EAthenaAnimationJumpingState__JumpFinished = 4,
	EAthenaAnimationJumpingState__PreImpact = 5,
	EAthenaAnimationJumpingState__EAthenaAnimationJumpingState_MAX = 6
};


// Enum Athena.EAthenaAnimationWheelState
enum class EAthenaAnimationWheelState : uint8_t
{
	EAthenaAnimationWheelState__Neutral = 0,
	EAthenaAnimationWheelState__Positive = 1,
	EAthenaAnimationWheelState__Negative = 2,
	EAthenaAnimationWheelState__EAthenaAnimationWheelState_MAX = 3
};


// Enum Athena.EWheelAnimationType
enum class EWheelAnimationType : uint8_t
{
	EWheelAnimationType__SmallTurn = 0,
	EWheelAnimationType__LeftTurnMid = 1,
	EWheelAnimationType__LeftTurnFast = 2,
	EWheelAnimationType__RightTurnMid = 3,
	EWheelAnimationType__RightTurnFast = 4,
	EWheelAnimationType__EWheelAnimationType_MAX = 5
};


// Enum Athena.EItemUseSpeed
enum class EItemUseSpeed : uint8_t
{
	EItemUseSpeed__Default         = 0,
	EItemUseSpeed__Custom          = 1,
	EItemUseSpeed__Custom01        = 2,
	EItemUseSpeed__EItemUseSpeed_MAX = 3
};


// Enum Athena.EMaxMoveSpeedScalarReason
enum class EMaxMoveSpeedScalarReason : uint8_t
{
	EMaxMoveSpeedScalarReason__Digging = 0,
	EMaxMoveSpeedScalarReason__Limping = 1,
	EMaxMoveSpeedScalarReason__UsingItem = 2,
	EMaxMoveSpeedScalarReason__Stunned = 3,
	EMaxMoveSpeedScalarReason__MeleeBlocking = 4,
	EMaxMoveSpeedScalarReason__Testing = 5,
	EMaxMoveSpeedScalarReason__NumReasons = 6,
	EMaxMoveSpeedScalarReason__EMaxMoveSpeedScalarReason_MAX = 7
};


// Enum Athena.EProjectileCollisionResponse
enum class EProjectileCollisionResponse : uint8_t
{
	EProjectileCollisionResponse__Ignore = 0,
	EProjectileCollisionResponse__Block = 1,
	EProjectileCollisionResponse__EProjectileCollisionResponse_MAX = 2
};


// Enum Athena.ESprintLockReason
enum class ESprintLockReason : uint8_t
{
	ESprintLockReason__WieldedItem = 0,
	ESprintLockReason__WieldedItemAction = 1,
	ESprintLockReason__ESprintLockReason_MAX = 2
};


// Enum Athena.EExplosionReceiverCurveType
enum class EExplosionReceiverCurveType : uint8_t
{
	EExplosionReceiverCurveType__None = 0,
	EExplosionReceiverCurveType__Other = 1,
	EExplosionReceiverCurveType__Player = 2,
	EExplosionReceiverCurveType__EExplosionReceiverCurveType_MAX = 3
};


// Enum Athena.ESwimAttackableType
enum class ESwimAttackableType : uint8_t
{
	ESwimAttackableType__TakesDamage = 0,
	ESwimAttackableType__SmallItem = 1,
	ESwimAttackableType__LargeItem = 2,
	ESwimAttackableType__ESwimAttackableType_MAX = 3
};


// Enum Athena.EAimSensitivitySettingCategory
enum class EAimSensitivitySettingCategory : uint8_t
{
	EAimSensitivitySettingCategory__Invalid = 0,
	EAimSensitivitySettingCategory__Blunderbuss = 1,
	EAimSensitivitySettingCategory__Flintlock = 2,
	EAimSensitivitySettingCategory__EyeOfReach = 3,
	EAimSensitivitySettingCategory__EAimSensitivitySettingCategory_MAX = 4
};


// Enum Athena.EMatchmakingVisibilityState
enum class EMatchmakingVisibilityState : uint8_t
{
	EMatchmakingVisibilityState__Public = 0,
	EMatchmakingVisibilityState__Private = 1,
	EMatchmakingVisibilityState__EMatchmakingVisibilityState_MAX = 2
};


// Enum Athena.EScuttleState
enum class EScuttleState : uint8_t
{
	EScuttleState__Scuttled        = 0,
	EScuttleState__NotScuttled     = 1,
	EScuttleState__EScuttleState_MAX = 2
};


// Enum Athena.EBrigState
enum class EBrigState : uint8_t
{
	EBrigState__Unbriggable        = 0,
	EBrigState__Free               = 1,
	EBrigState__InBrig_Releasable  = 2,
	EBrigState__InBrig_Unreleasable = 3,
	EBrigState__EBrigState_MAX     = 4
};


// Enum Athena.EAllianceNotificationType
enum class EAllianceNotificationType : uint8_t
{
	EAllianceNotificationType__Joined = 0,
	EAllianceNotificationType__Formed = 1,
	EAllianceNotificationType__Left = 2,
	EAllianceNotificationType__Disbanded = 3,
	EAllianceNotificationType__OtherCrewJoined = 4,
	EAllianceNotificationType__OtherCrewLeft = 5,
	EAllianceNotificationType__EAllianceNotificationType_MAX = 6
};


// Enum Athena.EAllianceJoinStatus
enum class EAllianceJoinStatus : uint8_t
{
	EAllianceJoinStatus__CannotJoinAlliance = 0,
	EAllianceJoinStatus__CanJoinAlliance = 1,
	EAllianceJoinStatus__IsInAlliance = 2,
	EAllianceJoinStatus__EAllianceJoinStatus_MAX = 3
};


// Enum Athena.EAllianceStatus
enum class EAllianceStatus : uint8_t
{
	EAllianceStatus__IsInAlliance  = 0,
	EAllianceStatus__IsNotInAlliance = 1,
	EAllianceStatus__EAllianceStatus_MAX = 2
};


// Enum Athena.ENPCCustomAnimationState
enum class ENPCCustomAnimationState : uint8_t
{
	ENPCCustomAnimationState__None = 0,
	ENPCCustomAnimationState__InOneShot = 1,
	ENPCCustomAnimationState__InContinuousIn = 2,
	ENPCCustomAnimationState__InContinuousLoopA = 3,
	ENPCCustomAnimationState__InContinuousLoopB = 4,
	ENPCCustomAnimationState__InContinuousOut = 5,
	ENPCCustomAnimationState__ENPCCustomAnimationState_MAX = 6
};


// Enum Athena.EAthenaNPCObjectSlot
enum class EAthenaNPCObjectSlot : uint8_t
{
	EAthenaNPCObjectSlot__Slot     = 0,
	EAthenaNPCObjectSlot__Slot01   = 1,
	EAthenaNPCObjectSlot__Slot02   = 2,
	EAthenaNPCObjectSlot__Slot03   = 3,
	EAthenaNPCObjectSlot__Slot04   = 4,
	EAthenaNPCObjectSlot__Slot05   = 5,
	EAthenaNPCObjectSlot__Slot06   = 6,
	EAthenaNPCObjectSlot__Slot07   = 7,
	EAthenaNPCObjectSlot__Slot08   = 8,
	EAthenaNPCObjectSlot__Slot09   = 9,
	EAthenaNPCObjectSlot__Slot_MAX = 10
};


// Enum Athena.EAthenaNPCSpawnHand
enum class EAthenaNPCSpawnHand : uint8_t
{
	EAthenaNPCSpawnHand__Left      = 0,
	EAthenaNPCSpawnHand__Right     = 1,
	EAthenaNPCSpawnHand__EAthenaNPCSpawnHand_MAX = 2
};


// Enum Athena.EVfxCustomLocalSpaceMode
enum class EVfxCustomLocalSpaceMode : uint8_t
{
	EVfxCustomLocalSpaceMode__Default = 0,
	EVfxCustomLocalSpaceMode__ShipSpaceAutoLocal = 1,
	EVfxCustomLocalSpaceMode__ShipSpaceAutoPlayer = 2,
	EVfxCustomLocalSpaceMode__ShipSpaceAutoWorld = 3,
	EVfxCustomLocalSpaceMode__EVfxCustomLocalSpaceMode_MAX = 4
};


// Enum Athena.EAnimNotifyUnderwaterMode
enum class EAnimNotifyUnderwaterMode : uint8_t
{
	EAnimNotifyUnderwaterMode__AutoDetect = 0,
	EAnimNotifyUnderwaterMode__AlwaysUnder = 1,
	EAnimNotifyUnderwaterMode__AlwaysAbove = 2,
	EAnimNotifyUnderwaterMode__EAnimNotifyUnderwaterMode_MAX = 3
};


// Enum Athena.EAthenaAnimationLadderState
enum class EAthenaAnimationLadderState : uint8_t
{
	EAthenaAnimationLadderState__None = 0,
	EAthenaAnimationLadderState__ClimbOn = 1,
	EAthenaAnimationLadderState__ClimbOff = 2,
	EAthenaAnimationLadderState__Climbing = 3,
	EAthenaAnimationLadderState__EAthenaAnimationLadderState_MAX = 4
};


// Enum Athena.EAthenaAnimationLadderTransitionState
enum class EAthenaAnimationLadderTransitionState : uint8_t
{
	EAthenaAnimationLadderTransitionState__None = 0,
	EAthenaAnimationLadderTransitionState__Bottom = 1,
	EAthenaAnimationLadderTransitionState__Top = 2,
	EAthenaAnimationLadderTransitionState__EAthenaAnimationLadderTransitionState_MAX = 3
};


// Enum Athena.ELadderType
enum class ELadderType : uint8_t
{
	ELadderType__Generic           = 0,
	ELadderType__BoatSide          = 1,
	ELadderType__BoatCrowsnest     = 2,
	ELadderType__ClamberSpot       = 3,
	ELadderType__ELadderType_MAX   = 4
};


// Enum Athena.ELadderTransitionMode
enum class ELadderTransitionMode : uint8_t
{
	ELadderTransitionMode__OnTop   = 0,
	ELadderTransitionMode__OffTop  = 1,
	ELadderTransitionMode__OnBottom = 2,
	ELadderTransitionMode__OffBottom = 3,
	ELadderTransitionMode__Max     = 4,
	ELadderTransitionMode__ELadderTransitionMode_MAX = 5
};


// Enum Athena.EStunAnimationType
enum class EStunAnimationType : uint8_t
{
	EStunAnimationType__None       = 0,
	EStunAnimationType__Normal     = 1,
	EStunAnimationType__ShadowSkeletonLightExposure = 2,
	EStunAnimationType__SkeletonDrunk = 3,
	EStunAnimationType__SkeletonDance = 4,
	EStunAnimationType__SkeletonSleep = 5,
	EStunAnimationType__EStunAnimationType_MAX = 6
};


// Enum Athena.EArmOverlayState
enum class EArmOverlayState : uint8_t
{
	EArmOverlayState__Idle         = 0,
	EArmOverlayState__Locomotion   = 1,
	EArmOverlayState__Swimming     = 2,
	EArmOverlayState__Turning      = 3,
	EArmOverlayState__JumpingStart = 4,
	EArmOverlayState__JumpingCycle = 5,
	EArmOverlayState__JumpingPreImpact = 6,
	EArmOverlayState__JumpingLandLight = 7,
	EArmOverlayState__Equipping    = 8,
	EArmOverlayState__UnEquipping  = 9,
	EArmOverlayState__OneShotAction = 10,
	EArmOverlayState__ContinuousActionIn = 11,
	EArmOverlayState__ContinuousActionCycle = 12,
	EArmOverlayState__ContinuousActionOut = 13,
	EArmOverlayState__ContinuousActionLocomotion = 14,
	EArmOverlayState__ContinuousActionJumpStart = 15,
	EArmOverlayState__ContinuousActionJumpCycle = 16,
	EArmOverlayState__ContinuousActionJumpPreImpact = 17,
	EArmOverlayState__ContinuousActionJumpLandLight = 18,
	EArmOverlayState__ContinuousActionSwimming = 19,
	EArmOverlayState__ComplexOneShotWarmUp = 20,
	EArmOverlayState__ComplexOneShotAction = 21,
	EArmOverlayState__ComplexOneShotRecover = 22,
	EArmOverlayState__BlockingInto = 23,
	EArmOverlayState__BlockingLocomotion = 24,
	EArmOverlayState__BlockingFeedbackA = 25,
	EArmOverlayState__BlockingFeedbackB = 26,
	EArmOverlayState__BlockingOutOf = 27,
	EArmOverlayState__Force_FullBody = 28,
	EArmOverlayState__Force_UpperBody = 29,
	EArmOverlayState__Force_2H     = 30,
	EArmOverlayState__EArmOverlayState_MAX = 31
};


// Enum Athena.EShowVoyageBannersState
enum class EShowVoyageBannersState : uint8_t
{
	EShowVoyageBannersState__Show  = 0,
	EShowVoyageBannersState__DontShow = 1,
	EShowVoyageBannersState__EShowVoyageBannersState_MAX = 2
};


// Enum Athena.EVoyageChangeReason
enum class EVoyageChangeReason : uint8_t
{
	EVoyageChangeReason__Unknown   = 0,
	EVoyageChangeReason__PreviousWasCompleted = 1,
	EVoyageChangeReason__PreviousWasCancelled = 2,
	EVoyageChangeReason__EVoyageChangeReason_MAX = 3
};


// Enum Athena.ECharacterSwimmingMode
enum class ECharacterSwimmingMode : uint8_t
{
	ECharacterSwimmingMode__Surface = 0,
	ECharacterSwimmingMode__Submerged = 1,
	ECharacterSwimmingMode__Total  = 2,
	ECharacterSwimmingMode__ECharacterSwimmingMode_MAX = 3
};


// Enum Athena.EAICharacterMaxSpeedModificationReason
enum class EAICharacterMaxSpeedModificationReason : uint8_t
{
	EAICharacterMaxSpeedModificationReason__SkeletonFormsConstant = 0,
	EAICharacterMaxSpeedModificationReason__SkeletonFormsEffects = 1,
	EAICharacterMaxSpeedModificationReason__SkeletonLimpCurse = 2,
	EAICharacterMaxSpeedModificationReason__EAICharacterMaxSpeedModificationReason_MAX = 3
};


// Enum Athena.EAudioGameState
enum class EAudioGameState : uint8_t
{
	EAudioGameState__None          = 0,
	EAudioGameState__InGame        = 1,
	EAudioGameState__InFrontendWrapper = 2,
	EAudioGameState__InFrontendMatineeSequence = 3,
	EAudioGameState__EAudioGameState_MAX = 4
};


// Enum Athena.EShovelDigType
enum class EShovelDigType : uint8_t
{
	EShovelDigType__Success        = 0,
	EShovelDigType__DeflectOffHardGround = 1,
	EShovelDigType__Invalid        = 2,
	EShovelDigType__None           = 3,
	EShovelDigType__EShovelDigType_MAX = 4
};


// Enum Athena.EEncounterListenerType
enum class EEncounterListenerType : uint8_t
{
	EEncounterListenerType__None   = 0,
	EEncounterListenerType__Ship   = 1,
	EEncounterListenerType__Player = 2,
	EEncounterListenerType__Count  = 3,
	EEncounterListenerType__EEncounterListenerType_MAX = 4
};


// Enum Athena.EEncounterMobility
enum class EEncounterMobility : uint8_t
{
	EEncounterMobility__Static     = 0,
	EEncounterMobility__Mobile     = 1,
	EEncounterMobility__EEncounterMobility_MAX = 2
};


// Enum Athena.EEncounterDimensions
enum class EEncounterDimensions : uint8_t
{
	EEncounterDimensions__ThreeDimensions = 0,
	EEncounterDimensions__TwoDimensions = 1,
	EEncounterDimensions__EEncounterDimensions_MAX = 2
};


// Enum Athena.EEncounterType
enum class EEncounterType : uint8_t
{
	EEncounterType__None           = 0,
	EEncounterType__Storm          = 1,
	EEncounterType__BarrelsOfPlenty = 2,
	EEncounterType__ShipSighting   = 3,
	EEncounterType__ShipEncounter  = 4,
	EEncounterType__ShipwreckSighting = 5,
	EEncounterType__ShipwreckEncounter = 6,
	EEncounterType__SkellyFortSighting = 7,
	EEncounterType__SkellyFortEncounter = 8,
	EEncounterType__KrakenSighting = 9,
	EEncounterType__KrakenEncounter = 10,
	EEncounterType__TinySharkSighting = 11,
	EEncounterType__TinySharkEncounter = 12,
	EEncounterType__AIShipSighting = 13,
	EEncounterType__AIShipEncounter = 14,
	EEncounterType__FogBank        = 15,
	EEncounterType__Count          = 16,
	EEncounterType__EEncounterType_MAX = 17
};


// Enum Athena.FPerformanceCounterOptions
enum class EFPerformanceCounterOptions : uint8_t
{
	FPerformanceCounterOptions__None = 0,
	FPerformanceCounterOptions__FPS = 1,
	FPerformanceCounterOptions__Ping = 2,
	FPerformanceCounterOptions__FPSAndPing = 3,
	FPerformanceCounterOptions__FPerformanceCounterOptions_MAX = 4
};


// Enum Athena.FVsyncOptions
enum class EFVsyncOptions : uint8_t
{
	FVsyncOptions__Off             = 0,
	FVsyncOptions__On              = 1,
	FVsyncOptions__COUNT           = 2,
	FVsyncOptions__FVsyncOptions_MAX = 3
};


// Enum Athena.FPersistentUserGameSettingsDetail
enum class EFPersistentUserGameSettingsDetail : uint8_t
{
	FPersistentUserGameSettingsDetail__Min = 0,
	FPersistentUserGameSettingsDetail__Low = 1,
	FPersistentUserGameSettingsDetail__Medium = 2,
	FPersistentUserGameSettingsDetail__High = 3,
	FPersistentUserGameSettingsDetail__Ultra = 4,
	FPersistentUserGameSettingsDetail__Recommended = 5,
	FPersistentUserGameSettingsDetail__COUNT = 6,
	FPersistentUserGameSettingsDetail__FPersistentUserGameSettingsDetail_MAX = 7
};


// Enum Athena.EBindingSet
enum class EBindingSet : uint8_t
{
	EBindingSet__ActionBindings    = 0,
	EBindingSet__AxisBindings      = 1,
	EBindingSet__EBindingSet_MAX   = 2
};


// Enum Athena.EFlameOfFateType
enum class EFlameOfFateType : uint8_t
{
	EFlameOfFateType__Default      = 0,
	EFlameOfFateType__DiedByShark  = 1,
	EFlameOfFateType__DiedByVolcano = 2,
	EFlameOfFateType__DiedBySkeleton = 3,
	EFlameOfFateType__DiedByLightning = 4,
	EFlameOfFateType__DiedByVenom  = 5,
	EFlameOfFateType__DiedByPlayer = 6,
	EFlameOfFateType__MAX          = 7,
	EFlameOfFateType__EFlameOfFateType_MAX = 8
};


// Enum Athena.EOverlapType
enum class EOverlapType : uint8_t
{
	EOverlapType__PhysX            = 0,
	EOverlapType__SimpleOverlaps   = 1,
	EOverlapType__Ticking          = 2,
	EOverlapType__EOverlapType_MAX = 3
};


// Enum Athena.ETreasureMapVerticalAlignment
enum class ETreasureMapVerticalAlignment : uint8_t
{
	ETreasureMapVerticalAlignment__Top = 0,
	ETreasureMapVerticalAlignment__Centre = 1,
	ETreasureMapVerticalAlignment__ETreasureMapVerticalAlignment_MAX = 2
};


// Enum Athena.ETreasureMapHorizontalAlignment
enum class ETreasureMapHorizontalAlignment : uint8_t
{
	ETreasureMapHorizontalAlignment__Left = 0,
	ETreasureMapHorizontalAlignment__Centre = 1,
	ETreasureMapHorizontalAlignment__Right = 2,
	ETreasureMapHorizontalAlignment__ETreasureMapHorizontalAlignment_MAX = 3
};


// Enum Athena.EBlendedFadeState
enum class EBlendedFadeState : uint8_t
{
	EBlendedFadeState__FadingIn    = 0,
	EBlendedFadeState__FadingOut   = 1,
	EBlendedFadeState__Active      = 2,
	EBlendedFadeState__Idle        = 3,
	EBlendedFadeState__EBlendedFadeState_MAX = 4
};


// Enum Athena.ECharacterFootImpactType
enum class ECharacterFootImpactType : uint8_t
{
	ECharacterFootImpactType__None = 0,
	ECharacterFootImpactType__Walk = 1,
	ECharacterFootImpactType__Jump = 2,
	ECharacterFootImpactType__Pace = 3,
	ECharacterFootImpactType__ECharacterFootImpactType_MAX = 4
};


// Enum Athena.ETargetUpdateReason
enum class ETargetUpdateReason : uint8_t
{
	ETargetUpdateReason__Update    = 0,
	ETargetUpdateReason__Replace   = 1,
	ETargetUpdateReason__ETargetUpdateReason_MAX = 2
};


// Enum Athena.ETaleQuestStepBeginMode
enum class ETaleQuestStepBeginMode : uint8_t
{
	ETaleQuestStepBeginMode__Cold  = 0,
	ETaleQuestStepBeginMode__Warm  = 1,
	ETaleQuestStepBeginMode__ETaleQuestStepBeginMode_MAX = 2
};


// Enum Athena.ETaleQuestStepState
enum class ETaleQuestStepState : uint8_t
{
	ETaleQuestStepState__Inactive  = 0,
	ETaleQuestStepState__Active    = 1,
	ETaleQuestStepState__PendingCompletion = 2,
	ETaleQuestStepState__Completed = 3,
	ETaleQuestStepState__ETaleQuestStepState_MAX = 4
};


// Enum Athena.ESpawnedItemSource
enum class ESpawnedItemSource : uint8_t
{
	ESpawnedItemSource__None       = 0,
	ESpawnedItemSource__Quest      = 1,
	ESpawnedItemSource__Shipwreck  = 2,
	ESpawnedItemSource__FloatingAtSea = 3,
	ESpawnedItemSource__Island     = 4,
	ESpawnedItemSource__SkellyFort = 5,
	ESpawnedItemSource__AIShip     = 6,
	ESpawnedItemSource__Megalodon  = 7,
	ESpawnedItemSource__KrakenTentacle = 8,
	ESpawnedItemSource__SunkenCurseArtefact = 9,
	ESpawnedItemSource__ESpawnedItemSource_MAX = 10
};


// Enum Athena.EBootyTypes
enum class EBootyTypes : uint8_t
{
	EBootyTypes__Invalid           = 0,
	EBootyTypes__TreasureChest     = 1,
	EBootyTypes__BountySkull       = 2,
	EBootyTypes__MerchantCrate     = 3,
	EBootyTypes__TreasureArtifact  = 4,
	EBootyTypes__AncientChest      = 5,
	EBootyTypes__PirateLordBooty   = 6,
	EBootyTypes__BoxOfSecrets      = 7,
	EBootyTypes__CargoRunCrate     = 8,
	EBootyTypes__MermaidGem        = 9,
	EBootyTypes__CollectorsChest   = 10,
	EBootyTypes__FishedItem        = 11,
	EBootyTypes__EBootyTypes_MAX   = 12
};


// Enum Athena.ETreasureChestProxyState
enum class ETreasureChestProxyState : uint8_t
{
	ETreasureChestProxyState__Idle = 0,
	ETreasureChestProxyState__BeingDugUp = 1,
	ETreasureChestProxyState__WaitingForPickup = 2,
	ETreasureChestProxyState__ETreasureChestProxyState_MAX = 3
};


// Enum Athena.EShipAlignmentType
enum class EShipAlignmentType : uint8_t
{
	EShipAlignmentType__None       = 0,
	EShipAlignmentType__AlignedToShip = 1,
	EShipAlignmentType__AlignedToShipXYOnly = 2,
	EShipAlignmentType__EShipAlignmentType_MAX = 3
};


// Enum Athena.EShipState
enum class EShipState : uint8_t
{
	EShipState__PlainSailing       = 0,
	EShipState__GrindingToHalt     = 1,
	EShipState__Lowering           = 2,
	EShipState__ReduceWaterOcclusionZone = 3,
	EShipState__KeelingOver        = 4,
	EShipState__KeeledOver         = 5,
	EShipState__FinalSinking       = 6,
	EShipState__Dead               = 7,
	EShipState__EShipState_MAX     = 8
};


// Enum Athena.EContainerType
enum class EContainerType : uint8_t
{
	EContainerType__None           = 0,
	EContainerType__Bucket         = 1,
	EContainerType__Stomach        = 2,
	EContainerType__Kraken         = 3,
	EContainerType__Total          = 4,
	EContainerType__EContainerType_MAX = 5
};


// Enum Athena.EThrowableLiquidType
enum class EThrowableLiquidType : uint8_t
{
	EThrowableLiquidType__Empty    = 0,
	EThrowableLiquidType__Water    = 1,
	EThrowableLiquidType__Vomit    = 2,
	EThrowableLiquidType__Total    = 3,
	EThrowableLiquidType__EThrowableLiquidType_MAX = 4
};


// Enum Athena.EBucketState
enum class EBucketState : uint8_t
{
	EBucketState__Idle             = 0,
	EBucketState__Scooping         = 1,
	EBucketState__Throwing         = 2,
	EBucketState__Max              = 3,
	EBucketState__Pad              = 4,
	EBucketState__EBucketState_MAX = 5
};


// Enum Athena.EIslandType
enum class EIslandType : uint8_t
{
	EIslandType__Resource          = 0,
	EIslandType__Outpost           = 1,
	EIslandType__Small             = 2,
	EIslandType__Medium            = 3,
	EIslandType__Large             = 4,
	EIslandType__Fort              = 5,
	EIslandType__Reef              = 6,
	EIslandType__SeaPost           = 7,
	EIslandType__None              = 8,
	EIslandType__Max               = 9,
	EIslandType__EIslandType_MAX   = 10
};


// Enum Athena.EBrigReleaseReason
enum class EBrigReleaseReason : uint8_t
{
	EBrigReleaseReason__VoteToRelease = 0,
	EBrigReleaseReason__AutoRelease = 1,
	EBrigReleaseReason__QuitGameRelease = 2,
	EBrigReleaseReason__EBrigReleaseReason_MAX = 3
};


// Enum Athena.ELocationGeneratorSampleType
enum class ELocationGeneratorSampleType : uint8_t
{
	ELocationGeneratorSampleType__None = 0,
	ELocationGeneratorSampleType__Usable = 1,
	ELocationGeneratorSampleType__Unusable_NoContact = 2,
	ELocationGeneratorSampleType__Unusable_SurfaceType = 3,
	ELocationGeneratorSampleType__Unusable_Proximity = 4,
	ELocationGeneratorSampleType__Unusable_Slope = 5,
	ELocationGeneratorSampleType__Unusable_BelowWater = 6,
	ELocationGeneratorSampleType__ELocationGeneratorSampleType_MAX = 7
};


// Enum Athena.EShipLocation
enum class EShipLocation : uint8_t
{
	EShipLocation__TOP_DECK        = 0,
	EShipLocation__MID_DECK        = 1,
	EShipLocation__BOTTOM_DECK     = 2,
	EShipLocation__HATCH_BACK_LEFT = 3,
	EShipLocation__HATCH_BACK_RIGHT = 4,
	EShipLocation__HATCH_FRONT_LEFT = 5,
	EShipLocation__HATCH_FRONT_RIGHT = 6,
	EShipLocation__CABIN_FRONT_DOOR = 7,
	EShipLocation__CABIN_SIDE_DOOR = 8,
	EShipLocation__TOP_DECK_BOW_PLANE = 9,
	EShipLocation__TOP_DECK_HATCH_PLANE = 10,
	EShipLocation__TOP_DECK_WHEEL_PLANE = 11,
	EShipLocation__MAP_DECK_FRONT_PLANE = 12,
	EShipLocation__MAP_DECK_TABLE_PLANE = 13,
	EShipLocation__MAP_DECK_REARSTAIRS_PLANE = 14,
	EShipLocation__BRIG_DECK_BRIG_PLANE = 15,
	EShipLocation__BRIG_DECK_STAIRS_PLANE = 16,
	EShipLocation__AITARGET_OFFSET_TO_EXTENTS = 17,
	EShipLocation__AITARGET_EXTENTS = 18,
	EShipLocation__AITARGET_ABOVE_DECK_OFFSET = 19,
	EShipLocation__AITARGET_ABOVE_DECK_EXTENTS = 20,
	EShipLocation__AITARGET_MID_DECK_OFFSET = 21,
	EShipLocation__AITARGET_MID_DECK_EXTENTS = 22,
	EShipLocation__AITARGET_LOWER_DECK_OFFSET = 23,
	EShipLocation__AITARGET_LOWER_DECK_EXTENTS = 24,
	EShipLocation__AI_KRAKEN_TENTACLE = 25,
	EShipLocation__EShipLocation_MAX = 26
};


// Enum Athena.EShipCurseTag
enum class EShipCurseTag : uint8_t
{
	EShipCurseTag__None            = 0,
	EShipCurseTag__Ballast         = 1,
	EShipCurseTag__Barrel          = 2,
	EShipCurseTag__Capstan         = 3,
	EShipCurseTag__Helm            = 4,
	EShipCurseTag__Rigging         = 5,
	EShipCurseTag__Peace           = 6,
	EShipCurseTag__EShipCurseTag_MAX = 7
};


// Enum Athena.ECurseTag
enum class ECurseTag : uint8_t
{
	ECurseTag__None                = 0,
	ECurseTag__ToggleInteractionsForCapstan = 1,
	ECurseTag__ToggleInteractionsForShipStorageContainers = 2,
	ECurseTag__ToggleInteractionsForRigging = 3,
	ECurseTag__ToggleInteractionsForShipCannons = 4,
	ECurseTag__ToggleLockOnWheel   = 5,
	ECurseTag__ECurseTag_MAX       = 6
};


// Enum Athena.EShipDynamicsAnchoredState
enum class EShipDynamicsAnchoredState : uint8_t
{
	EShipDynamicsAnchoredState__Unknown = 0,
	EShipDynamicsAnchoredState__Raised = 1,
	EShipDynamicsAnchoredState__Lowered = 2,
	EShipDynamicsAnchoredState__EShipDynamicsAnchoredState_MAX = 3
};


// Enum Athena.EShipSurfacingState
enum class EShipSurfacingState : uint8_t
{
	EShipSurfacingState__Sailing   = 0,
	EShipSurfacingState__Surfacing = 1,
	EShipSurfacingState__Diving    = 2,
	EShipSurfacingState__EShipSurfacingState_MAX = 3
};


// Enum Athena.EHasBeenWieldedState
enum class EHasBeenWieldedState : uint8_t
{
	EHasBeenWieldedState__InitialState = 0,
	EHasBeenWieldedState__HasNotBeenWielded = 1,
	EHasBeenWieldedState__HasBeenWielded = 2,
	EHasBeenWieldedState__EHasBeenWieldedState_MAX = 3
};


// Enum Athena.ECarouselPirateBodyshapeDirection
enum class ECarouselPirateBodyshapeDirection : uint8_t
{
	ECarouselPirateBodyshapeDirection__None = 0,
	ECarouselPirateBodyshapeDirection__N = 1,
	ECarouselPirateBodyshapeDirection__NW = 2,
	ECarouselPirateBodyshapeDirection__W = 3,
	ECarouselPirateBodyshapeDirection__SW = 4,
	ECarouselPirateBodyshapeDirection__S = 5,
	ECarouselPirateBodyshapeDirection__SE = 6,
	ECarouselPirateBodyshapeDirection__E = 7,
	ECarouselPirateBodyshapeDirection__NE = 8,
	ECarouselPirateBodyshapeDirection__ECarouselPirateBodyshapeDirection_MAX = 9
};


// Enum Athena.EWalletCurrencyId
enum class EWalletCurrencyId : uint8_t
{
	EWalletCurrencyId__Undefined   = 0,
	EWalletCurrencyId__Gold        = 1,
	EWalletCurrencyId__WaywardTokens = 2,
	EWalletCurrencyId__Premium     = 3,
	EWalletCurrencyId__EWalletCurrencyId_MAX = 4
};


// Enum Athena.EMastDamageState
enum class EMastDamageState : uint8_t
{
	EMastDamageState__Intact       = 0,
	EMastDamageState__Secured      = 1,
	EMastDamageState__Upright      = 2,
	EMastDamageState__FreeToMove   = 3,
	EMastDamageState__EMastDamageState_MAX = 4
};


// Enum Athena.EMastType
enum class EMastType : uint8_t
{
	EMastType__Front               = 0,
	EMastType__Main                = 1,
	EMastType__Rear                = 2,
	EMastType__EMastType_MAX       = 3
};


// Enum Athena.EPlayerMusicState
enum class EPlayerMusicState : uint8_t
{
	EPlayerMusicState__InCave      = 0,
	EPlayerMusicState__InPuzzleVault = 1,
	EPlayerMusicState__InsideShip  = 2,
	EPlayerMusicState__Fishing     = 3,
	EPlayerMusicState__KrakenEncounter = 4,
	EPlayerMusicState__MusicZone_PriorityHigh = 5,
	EPlayerMusicState__MusicZone_PriorityMed = 6,
	EPlayerMusicState__MusicZone_PriorityLow = 7,
	EPlayerMusicState__NoMusicState = 8,
	EPlayerMusicState__OnBountyQuestPreAction = 9,
	EPlayerMusicState__OnBountyQuestAction = 10,
	EPlayerMusicState__OnBountyFortAnticipation = 11,
	EPlayerMusicState__OnBountyFortPreAction = 12,
	EPlayerMusicState__OnBountyFortAction = 13,
	EPlayerMusicState__OnIsland    = 14,
	EPlayerMusicState__OnIslandNearCompany = 15,
	EPlayerMusicState__OutAtSea    = 16,
	EPlayerMusicState__ServerMigration = 17,
	EPlayerMusicState__Shipwreck   = 18,
	EPlayerMusicState__SkellyShipEncounter = 19,
	EPlayerMusicState__SkellyShipEmergentEncounter = 20,
	EPlayerMusicState__TinySharkEncounter = 21,
	EPlayerMusicState__UnderWater  = 22,
	EPlayerMusicState__EPlayerMusicState_MAX = 23
};


// Enum Athena.ECharacterSocketCollisionResultType
enum class ECharacterSocketCollisionResultType : uint8_t
{
	CollisionsOnly                 = 0,
	NonCollisionsOnly              = 1,
	CollisionsAndNonCollisions     = 2,
	ECharacterSocketCollisionResultType_MAX = 3
};


// Enum Athena.ECharacterSocketCollisionTraceType
enum class ECharacterSocketCollisionTraceType : uint8_t
{
	WorldUp                        = 0,
	WorldDown                      = 1,
	WorldLeft                      = 2,
	WorldRight                     = 3,
	TravelForwards                 = 4,
	TravelBackwards                = 5,
	ECharacterSocketCollisionTraceType_MAX = 6
};


// Enum Athena.ELeftStickScalarReason
enum class ELeftStickScalarReason : uint8_t
{
	ELeftStickScalarReason__Limping = 0,
	ELeftStickScalarReason__Pacing = 1,
	ELeftStickScalarReason__NumReasons = 2,
	ELeftStickScalarReason__ELeftStickScalarReason_MAX = 3
};


// Enum Athena.EStickinessType
enum class EStickinessType : uint8_t
{
	EStickinessType__DontStick     = 0,
	EStickinessType__StickTemporarily = 1,
	EStickinessType__StickForever  = 2,
	EStickinessType__EStickinessType_MAX = 3
};


// Enum Athena.ENotificationType
enum class ENotificationType : uint8_t
{
	ENotificationType__Chat        = 0,
	ENotificationType__Server      = 1,
	ENotificationType__FormattedChat = 2,
	ENotificationType__ENotificationType_MAX = 3
};


// Enum Athena.ENPCChatType
enum class ENPCChatType : uint8_t
{
	ENPCChatType__Chat             = 0,
	ENPCChatType__Subtitles        = 1,
	ENPCChatType__ENPCChatType_MAX = 2
};


// Enum Athena.EEntitlementStatus
enum class EEntitlementStatus : uint8_t
{
	EEntitlementStatus__Unknown    = 0,
	EEntitlementStatus__Invalid    = 1,
	EEntitlementStatus__UsableButUnverified = 2,
	EEntitlementStatus__UsableAndVerfied = 3,
	EEntitlementStatus__EEntitlementStatus_MAX = 4
};


// Enum Athena.EUIInputFocusType
enum class EUIInputFocusType : uint8_t
{
	EUIInputFocusType__None        = 0,
	EUIInputFocusType__MouseCaptureOnly = 1,
	EUIInputFocusType__FullCapture = 2,
	EUIInputFocusType__EUIInputFocusType_MAX = 3
};


// Enum Athena.EItemLoadoutDestroyBehaviour
enum class EItemLoadoutDestroyBehaviour : uint8_t
{
	EItemLoadoutDestroyBehaviour__DoNotDestroy = 0,
	EItemLoadoutDestroyBehaviour__Destroy = 1,
	EItemLoadoutDestroyBehaviour__EItemLoadoutDestroyBehaviour_MAX = 2
};


// Enum Athena.InventoryAction
enum class EInventoryAction : uint8_t
{
	InventoryAction__Take          = 0,
	InventoryAction__Stow          = 1,
	InventoryAction__InventoryAction_MAX = 2
};


// Enum Athena.InventoryItemState
enum class EInventoryItemState : uint8_t
{
	InventoryItemState__Default    = 0,
	InventoryItemState__Locked     = 1,
	InventoryItemState__InventoryItemState_MAX = 2
};


// Enum Athena.EProgressStyle
enum class EProgressStyle : uint8_t
{
	EProgressStyle__Circle         = 0,
	EProgressStyle__Square         = 1,
	EProgressStyle__Hexagon        = 2,
	EProgressStyle__Diamond        = 3,
	EProgressStyle__SeaDogs        = 4,
	EProgressStyle__HuntersCall    = 5,
	EProgressStyle__EProgressStyle_MAX = 6
};


// Enum Athena.EContestState
enum class EContestState : uint8_t
{
	EContestState__Idle            = 0,
	EContestState__Staging         = 1,
	EContestState__Contest         = 2,
	EContestState__PostContest     = 3,
	EContestState__Reward          = 4,
	EContestState__EContestState_MAX = 5
};


// Enum Athena.EContestScoreId
enum class EContestScoreId : uint8_t
{
	EContestScoreId__Undefined     = 0,
	EContestScoreId__Silver        = 1,
	EContestScoreId__EContestScoreId_MAX = 2
};


// Enum Athena.EQuestDistributionMethod
enum class EQuestDistributionMethod : uint8_t
{
	EQuestDistributionMethod__AllAtOnce = 0,
	EQuestDistributionMethod__PerChapter = 1,
	EQuestDistributionMethod__FixedChapters = 2,
	EQuestDistributionMethod__EQuestDistributionMethod_MAX = 3
};


// Enum Athena.EVoyageLocationType
enum class EVoyageLocationType : uint8_t
{
	EVoyageLocationType__Fixed     = 0,
	EVoyageLocationType__Random    = 1,
	EVoyageLocationType__EVoyageLocationType_MAX = 2
};


// Enum Athena.EQuestLocationSelectionMethod
enum class EQuestLocationSelectionMethod : uint8_t
{
	EQuestLocationSelectionMethod__NoRepetitionWithinVoyage = 0,
	EQuestLocationSelectionMethod__NoRepetitionWithinAdjacentChapters = 1,
	EQuestLocationSelectionMethod__AllIslandsAvailable = 2,
	EQuestLocationSelectionMethod__EQuestLocationSelectionMethod_MAX = 3
};


// Enum Athena.EQuestPoolSelectionMethod
enum class EQuestPoolSelectionMethod : uint8_t
{
	EQuestPoolSelectionMethod__Sequential = 0,
	EQuestPoolSelectionMethod__Random = 1,
	EQuestPoolSelectionMethod__EQuestPoolSelectionMethod_MAX = 2
};


// Enum Athena.ESpecialEvents
enum class ESpecialEvents : uint8_t
{
	ESpecialEvents__None           = 0,
	ESpecialEvents__StartBlinds    = 1,
	ESpecialEvents__Leaderboard    = 2,
	ESpecialEvents__TavernCeremony = 3,
	ESpecialEvents__ESpecialEvents_MAX = 4
};


// Enum Athena.EContestStagePivot
enum class EContestStagePivot : uint8_t
{
	EContestStagePivot__Beginning  = 0,
	EContestStagePivot__Quater     = 1,
	EContestStagePivot__HalfTime   = 2,
	EContestStagePivot__ThirdQuater = 3,
	EContestStagePivot__End        = 4,
	EContestStagePivot__EContestStagePivot_MAX = 5
};


// Enum Athena.EContestEventStages
enum class EContestEventStages : uint8_t
{
	EContestEventStages__Staging   = 0,
	EContestEventStages__Contest   = 1,
	EContestEventStages__PostContest = 2,
	EContestEventStages__Reward    = 3,
	EContestEventStages__EContestEventStages_MAX = 4
};


// Enum Athena.EScoreReason
enum class EScoreReason : uint8_t
{
	EScoreReason__None             = 0,
	EScoreReason__SoldChest        = 1,
	EScoreReason__SoldStolenChest  = 2,
	EScoreReason__CrewShipSunk     = 3,
	EScoreReason__KilledOpponent   = 4,
	EScoreReason__ChestDugUp       = 5,
	EScoreReason__MastHit          = 6,
	EScoreReason__CapstanHit       = 7,
	EScoreReason__WheelHit         = 8,
	EScoreReason__HullHit          = 9,
	EScoreReason__EScoreReason_MAX = 10
};


// Enum Athena.ECrewOwnershipState
enum class ECrewOwnershipState : uint8_t
{
	ECrewOwnershipState__Neutral   = 0,
	ECrewOwnershipState__Assigned  = 1,
	ECrewOwnershipState__ECrewOwnershipState_MAX = 2
};


// Enum Athena.EDamageTargetType
enum class EDamageTargetType : uint8_t
{
	EDamageTargetType__Player      = 0,
	EDamageTargetType__Ship        = 1,
	EDamageTargetType__EDamageTargetType_MAX = 2
};


// Enum Athena.DrowningState
enum class EDrowningState : uint8_t
{
	DrowningState__NotDrowning     = 0,
	DrowningState__Drowning        = 1,
	DrowningState__Gulping         = 2,
	DrowningState__DrowningState_MAX = 3
};


// Enum Athena.EDrunkennessType
enum class EDrunkennessType : uint8_t
{
	EDrunkennessType__FromDrinkingAlcohol = 0,
	EDrunkennessType__FromDrunkenChest = 1,
	EDrunkennessType__NumTypes     = 2,
	EDrunkennessType__EDrunkennessType_MAX = 3
};


// Enum Athena.EMusicalInstrumentType
enum class EMusicalInstrumentType : uint8_t
{
	EMusicalInstrumentType__Banjo  = 0,
	EMusicalInstrumentType__Bass   = 1,
	EMusicalInstrumentType__Concertina = 2,
	EMusicalInstrumentType__Drums  = 3,
	EMusicalInstrumentType__HurdyGurdy = 4,
	EMusicalInstrumentType__OneManBand = 5,
	EMusicalInstrumentType__Sousaphone = 6,
	EMusicalInstrumentType__Ukulele = 7,
	EMusicalInstrumentType__VoiceBox = 8,
	EMusicalInstrumentType__Total  = 9,
	EMusicalInstrumentType__EMusicalInstrumentType_MAX = 10
};


// Enum Athena.EConeWeightingMethod
enum class EConeWeightingMethod : uint8_t
{
	EConeWeightingMethod__Weighted = 0,
	EConeWeightingMethod__Absolute = 1,
	EConeWeightingMethod__EConeWeightingMethod_MAX = 2
};


// Enum Athena.EShipHullDamageType
enum class EShipHullDamageType : uint8_t
{
	EShipHullDamageType__Landscape = 0,
	EShipHullDamageType__RammingSpur = 1,
	EShipHullDamageType__EShipHullDamageType_MAX = 2
};


// Enum Athena.EFaunaAnimationSnakeAttackDirection
enum class EFaunaAnimationSnakeAttackDirection : uint8_t
{
	EFaunaAnimationSnakeAttackDirection__Forwards = 0,
	EFaunaAnimationSnakeAttackDirection__Backwards = 1,
	EFaunaAnimationSnakeAttackDirection__EFaunaAnimationSnakeAttackDirection_MAX = 2
};


// Enum Athena.EFaunaAnimationStartledLevel
enum class EFaunaAnimationStartledLevel : uint8_t
{
	EFaunaAnimationStartledLevel__None = 0,
	EFaunaAnimationStartledLevel__Low = 1,
	EFaunaAnimationStartledLevel__High = 2,
	EFaunaAnimationStartledLevel__EFaunaAnimationStartledLevel_MAX = 3
};


// Enum Athena.EFaunaAnimationLocation
enum class EFaunaAnimationLocation : uint8_t
{
	EFaunaAnimationLocation__Land  = 0,
	EFaunaAnimationLocation__Sea   = 1,
	EFaunaAnimationLocation__Underwater = 2,
	EFaunaAnimationLocation__EFaunaAnimationLocation_MAX = 3
};


// Enum Athena.EFaunaAnimationState
enum class EFaunaAnimationState : uint8_t
{
	EFaunaAnimationState__Idle     = 0,
	EFaunaAnimationState__Locomotion = 1,
	EFaunaAnimationState__Impact   = 2,
	EFaunaAnimationState__DyingLoop = 3,
	EFaunaAnimationState__Death    = 4,
	EFaunaAnimationState__Special  = 5,
	EFaunaAnimationState__EFaunaAnimationState_MAX = 6
};


// Enum Athena.EFogState
enum class EFogState : uint8_t
{
	EFogState__NotSetUpYet         = 0,
	EFogState__FadingIn            = 1,
	EFogState__Active              = 2,
	EFogState__FadingOut           = 3,
	EFogState__EFogState_MAX       = 4
};


// Enum Athena.EFruitState
enum class EFruitState : uint8_t
{
	EFruitState__Idle              = 0,
	EFruitState__IntoEating        = 1,
	EFruitState__OutOfEating       = 2,
	EFruitState__EFruitState_MAX   = 3
};


// Enum Athena.EGameEventStatus
enum class EGameEventStatus : uint8_t
{
	EGameEventStatus__Failed       = 0,
	EGameEventStatus__Triggered    = 1,
	EGameEventStatus__Complete     = 2,
	EGameEventStatus__EGameEventStatus_MAX = 3
};


// Enum Athena.EGameplayEventSignalType
enum class EGameplayEventSignalType : uint8_t
{
	EGameplayEventSignalType__SkellyFort = 0,
	EGameplayEventSignalType__SkellyShip = 1,
	EGameplayEventSignalType__MAX  = 2,
	EGameplayEventSignalType__EGameplayEventSignalType_MAX = 3
};


// Enum Athena.EGlintCondition
enum class EGlintCondition : uint8_t
{
	EGlintCondition__OnShip        = 0,
	EGlintCondition__Floating      = 1,
	EGlintCondition__SpawnedAsSunkenSalvage = 2,
	EGlintCondition__EGlintCondition_MAX = 3
};


// Enum Athena.EHarpoonLauncherReelingState
enum class EHarpoonLauncherReelingState : uint8_t
{
	EHarpoonLauncherReelingState__NotReeling = 0,
	EHarpoonLauncherReelingState__ReelingIn = 1,
	EHarpoonLauncherReelingState__ReelingLocked = 2,
	EHarpoonLauncherReelingState__EHarpoonLauncherReelingState_MAX = 3
};


// Enum Athena.EHarpoonLauncherRetractReason
enum class EHarpoonLauncherRetractReason : uint8_t
{
	EHarpoonLauncherRetractReason__Default = 0,
	EHarpoonLauncherRetractReason__PlayerInstigated = 1,
	EHarpoonLauncherRetractReason__TetherLengthExeeded = 2,
	EHarpoonLauncherRetractReason__EHarpoonLauncherRetractReason_MAX = 3
};


// Enum Athena.EHoleState
enum class EHoleState : uint8_t
{
	EHoleState__Alive              = 0,
	EHoleState__Dead               = 1,
	EHoleState__EHoleState_MAX     = 2
};


// Enum Athena.EBuriedItemType
enum class EBuriedItemType : uint8_t
{
	EBuriedItemType__None          = 0,
	EBuriedItemType__Chest         = 1,
	EBuriedItemType__QuestItem     = 2,
	EBuriedItemType__EBuriedItemType_MAX = 3
};


// Enum Athena.EHullDamageDeck
enum class EHullDamageDeck : uint8_t
{
	EHullDamageDeck__Bottom        = 0,
	EHullDamageDeck__Mid           = 1,
	EHullDamageDeck__EHullDamageDeck_MAX = 2
};


// Enum Athena.ELeakEffectState
enum class ELeakEffectState : uint8_t
{
	ELeakEffectState__Off          = 0,
	ELeakEffectState__LeakingWater = 1,
	ELeakEffectState__LeakingWaterPlugged = 2,
	ELeakEffectState__LeakingBubbles = 3,
	ELeakEffectState__LeakingBubblesPlugged = 4,
	ELeakEffectState__ELeakEffectState_MAX = 5
};


// Enum Athena.ELeakState
enum class ELeakState : uint8_t
{
	ELeakState__Open               = 0,
	ELeakState__Plugged            = 1,
	ELeakState__ELeakState_MAX     = 2
};


// Enum Athena.EShipLeakerUpdateType
enum class EShipLeakerUpdateType : uint8_t
{
	EShipLeakerUpdateType__Iterative = 0,
	EShipLeakerUpdateType__ForceAll = 1,
	EShipLeakerUpdateType__EShipLeakerUpdateType_MAX = 2
};


// Enum Athena.EShantyEnsembleOption
enum class EShantyEnsembleOption : uint8_t
{
	EShantyEnsembleOption__TryToJoinExistingNearbyEnsemble = 0,
	EShantyEnsembleOption__ForceNewEnsemble = 1,
	EShantyEnsembleOption__EShantyEnsembleOption_MAX = 2
};


// Enum Athena.EMermaidState
enum class EMermaidState : uint8_t
{
	EMermaidState__Rising          = 0,
	EMermaidState__Idle            = 1,
	EMermaidState__Disappearing    = 2,
	EMermaidState__EMermaidState_MAX = 3
};


// Enum Athena.EAllocationStrategy
enum class EAllocationStrategy : uint8_t
{
	EAllocationStrategy__Normal    = 0,
	EAllocationStrategy__LowPriority = 1,
	EAllocationStrategy__NonAllocated = 2,
	EAllocationStrategy__EAllocationStrategy_MAX = 3
};


// Enum Athena.ERiddleActions
enum class ERiddleActions : uint8_t
{
	ERiddleActions__RaiseLanternAnyone = 0,
	ERiddleActions__PlayAnyInstrumentAnyone = 1,
	ERiddleActions__Dig            = 2,
	ERiddleActions__LookAtMap      = 3,
	ERiddleActions__NumActions     = 4,
	ERiddleActions__ERiddleActions_MAX = 5
};


// Enum Athena.ERiddleActionLocationOffsets
enum class ERiddleActionLocationOffsets : uint8_t
{
	ERiddleActionLocationOffsets__PerformActionAtLocation = 0,
	ERiddleActionLocationOffsets__PerformActionAtCompassDirectionOffsetFromLocation = 1,
	ERiddleActionLocationOffsets__ERiddleActionLocationOffsets_MAX = 2
};


// Enum Athena.ERiddleLocations
enum class ERiddleLocations : uint8_t
{
	ERiddleLocations__NotOnIsland  = 0,
	ERiddleLocations__UniqueNonVagueLandmark = 1,
	ERiddleLocations__UniqueVagueLandmark = 2,
	ERiddleLocations__NonUniqueNonVagueLandmark = 3,
	ERiddleLocations__Island       = 4,
	ERiddleLocations__ERiddleLocations_MAX = 5
};


// Enum Athena.EDoorState
enum class EDoorState : uint8_t
{
	EDoorState__Closed             = 0,
	EDoorState__Triggered          = 1,
	EDoorState__Opening            = 2,
	EDoorState__Open               = 3,
	EDoorState__EDoorState_MAX     = 4
};


// Enum Athena.EDiggingState
enum class EDiggingState : uint8_t
{
	EDiggingState__Idle            = 0,
	EDiggingState__BeingDugUp      = 1,
	EDiggingState__WaitingForPickup = 2,
	EDiggingState__EDiggingState_MAX = 3
};


// Enum Athena.ECompassDirections
enum class ECompassDirections : uint8_t
{
	ECompassDirections__North      = 0,
	ECompassDirections__NorthByNorthEast = 1,
	ECompassDirections__NorthEast  = 2,
	ECompassDirections__EastByNorthEast = 3,
	ECompassDirections__East       = 4,
	ECompassDirections__EastBySouthEast = 5,
	ECompassDirections__SouthEast  = 6,
	ECompassDirections__SouthBySouthEast = 7,
	ECompassDirections__South      = 8,
	ECompassDirections__SouthBySouthWest = 9,
	ECompassDirections__SouthWest  = 10,
	ECompassDirections__WestBySouthWest = 11,
	ECompassDirections__West       = 12,
	ECompassDirections__WestByNorthWest = 13,
	ECompassDirections__NorthWest  = 14,
	ECompassDirections__NorthByNorthWest = 15,
	ECompassDirections__NumDirections = 16,
	ECompassDirections__ECompassDirections_MAX = 17
};


// Enum Athena.ELandmarkUniqueness
enum class ELandmarkUniqueness : uint8_t
{
	ELandmarkUniqueness__Unique    = 0,
	ELandmarkUniqueness__NonUnique = 1,
	ELandmarkUniqueness__ELandmarkUniqueness_MAX = 2
};


// Enum Athena.ELandmarkVagueness
enum class ELandmarkVagueness : uint8_t
{
	ELandmarkVagueness__Vague      = 0,
	ELandmarkVagueness__NonVague   = 1,
	ELandmarkVagueness__ELandmarkVagueness_MAX = 2
};


// Enum Athena.EEventRunLocation
enum class EEventRunLocation : uint8_t
{
	EEventRunLocation__Client      = 0,
	EEventRunLocation__Server      = 1,
	EEventRunLocation__ClientAndServer = 2,
	EEventRunLocation__EEventRunLocation_MAX = 3
};


// Enum Athena.EHarpoonProjectileState
enum class EHarpoonProjectileState : uint8_t
{
	EHarpoonProjectileState__Docked = 0,
	EHarpoonProjectileState__InFlight = 1,
	EHarpoonProjectileState__Attached = 2,
	EHarpoonProjectileState__EHarpoonProjectileState_MAX = 3
};


// Enum Athena.ELoadableState
enum class ELoadableState : uint8_t
{
	ELoadableState__Unloaded       = 0,
	ELoadableState__Unloading      = 1,
	ELoadableState__Loading        = 2,
	ELoadableState__Loaded         = 3,
	ELoadableState__ELoadableState_MAX = 4
};


// Enum Athena.ELoadoutPersistence
enum class ELoadoutPersistence : uint8_t
{
	ELoadoutPersistence__Temporary = 0,
	ELoadoutPersistence__Persistent = 1,
	ELoadoutPersistence__ELoadoutPersistence_MAX = 2
};


// Enum Athena.ELPVAdaptationType
enum class ELPVAdaptationType : uint8_t
{
	ELPVAdaptationType__Full       = 0,
	ELPVAdaptationType__CutTranslation = 1,
	ELPVAdaptationType__None       = 2,
	ELPVAdaptationType__ELPVAdaptationType_MAX = 3
};


// Enum Athena.EWorldMapShipType
enum class EWorldMapShipType : uint8_t
{
	EWorldMapShipType__None        = 0,
	EWorldMapShipType__IsInAlliance = 1,
	EWorldMapShipType__HasReapersMark = 2,
	EWorldMapShipType__IsOwnedShip = 3,
	EWorldMapShipType__IsContestShip = 4,
	EWorldMapShipType__EWorldMapShipType_MAX = 5
};


// Enum Athena.EMeleeWeaponMovementSpeed
enum class EMeleeWeaponMovementSpeed : uint8_t
{
	EMeleeWeaponMovementSpeed__Default = 0,
	EMeleeWeaponMovementSpeed__SlightlySlowed = 1,
	EMeleeWeaponMovementSpeed__Slowed = 2,
	EMeleeWeaponMovementSpeed__EMeleeWeaponMovementSpeed_MAX = 3
};


// Enum Athena.EMeleeAttackInterruptReason
enum class EMeleeAttackInterruptReason : uint8_t
{
	EMeleeAttackInterruptReason__Stopping = 0,
	EMeleeAttackInterruptReason__Comboing = 1,
	EMeleeAttackInterruptReason__EMeleeAttackInterruptReason_MAX = 2
};


// Enum Athena.EMeleeWeaponAttackType
enum class EMeleeWeaponAttackType : uint8_t
{
	EMeleeWeaponAttackType__Combo  = 0,
	EMeleeWeaponAttackType__Heavy  = 1,
	EMeleeWeaponAttackType__EMeleeWeaponAttackType_MAX = 2
};


// Enum Athena.EPlayerAbandonedReason
enum class EPlayerAbandonedReason : uint8_t
{
	EPlayerAbandonedReason__None   = 0,
	EPlayerAbandonedReason__NoCrewShip = 1,
	EPlayerAbandonedReason__FarFromShipAndOnLand = 2,
	EPlayerAbandonedReason__FarFromShipInWater = 3,
	EPlayerAbandonedReason__OnShip = 4,
	EPlayerAbandonedReason__CloseEnoughToCrewShip = 5,
	EPlayerAbandonedReason__OnWatercraft = 6,
	EPlayerAbandonedReason__CloseEnoughToWatercraft = 7,
	EPlayerAbandonedReason__EPlayerAbandonedReason_MAX = 8
};


// Enum Athena.EPlayerAbandoned
enum class EPlayerAbandoned : uint8_t
{
	EPlayerAbandoned__Yes          = 0,
	EPlayerAbandoned__No           = 1,
	EPlayerAbandoned__DontKnow     = 2,
	EPlayerAbandoned__EPlayerAbandoned_MAX = 3
};


// Enum Athena.EShovelState
enum class EShovelState : uint8_t
{
	EShovelState__Idle             = 0,
	EShovelState__Digging          = 1,
	EShovelState__EShovelState_MAX = 2
};


// Enum Athena.EPossessionsChestType
enum class EPossessionsChestType : uint8_t
{
	EPossessionsChestType__Unknown = 0,
	EPossessionsChestType__EquipmentChest = 1,
	EPossessionsChestType__ClothingChest = 2,
	EPossessionsChestType__VanityChest = 3,
	EPossessionsChestType__ArmoryChest = 4,
	EPossessionsChestType__ShipCustomizationChest = 5,
	EPossessionsChestType__ShipFlagCustomizationChest = 6,
	EPossessionsChestType__PetChest = 7,
	EPossessionsChestType__EPossessionsChestType_MAX = 8
};


// Enum Athena.ETutorialDialogStep
enum class ETutorialDialogStep : uint8_t
{
	ETutorialDialogStep__None      = 0,
	ETutorialDialogStep__StartedTalkedToMysteriousStranger = 1,
	ETutorialDialogStep__FinishedTalkingToMysteriousStranger = 2,
	ETutorialDialogStep__ETutorialDialogStep_MAX = 3
};


// Enum Athena.EOpenableItemState
enum class EOpenableItemState : uint8_t
{
	EOpenableItemState__Open       = 0,
	EOpenableItemState__Closed     = 1,
	EOpenableItemState__EOpenableItemState_MAX = 2
};


// Enum Athena.EMockShipConnectionPartType
enum class EMockShipConnectionPartType : uint8_t
{
	EMockShipConnectionPartType__HoistToMast = 0,
	EMockShipConnectionPartType__AngleToMast = 1,
	EMockShipConnectionPartType__Total = 2,
	EMockShipConnectionPartType__EMockShipConnectionPartType_MAX = 3
};


// Enum Athena.ECompanyStatus
enum class ECompanyStatus : uint8_t
{
	ECompanyStatus__Invalid        = 0,
	ECompanyStatus__Pending        = 1,
	ECompanyStatus__Valid          = 2,
	ECompanyStatus__ECompanyStatus_MAX = 3
};


// Enum Athena.EMuteState
enum class EMuteState : uint8_t
{
	EMuteState__NotMuted           = 0,
	EMuteState__VoiceMuted         = 1,
	EMuteState__ChatMuted          = 2,
	EMuteState__VoiceAndChatMuted  = 3,
	EMuteState__NonVerbalMuted     = 4,
	EMuteState__VoiceAndNonVerbalMuted = 5,
	EMuteState__ChatAndNonVerbalMuted = 6,
	EMuteState__AllMuted           = 7,
	EMuteState__EMuteState_MAX     = 8
};


// Enum Athena.EPlayerCurseTag
enum class EPlayerCurseTag : uint8_t
{
	EPlayerCurseTag__None          = 0,
	EPlayerCurseTag__Limping       = 1,
	EPlayerCurseTag__Poisoned      = 2,
	EPlayerCurseTag__Drunk         = 3,
	EPlayerCurseTag__Silenced      = 4,
	EPlayerCurseTag__Dancing       = 5,
	EPlayerCurseTag__Sleeping      = 6,
	EPlayerCurseTag__Vomit         = 7,
	EPlayerCurseTag__EPlayerCurseTag_MAX = 8
};


// Enum Athena.ERequestEntitlementBehaviour
enum class ERequestEntitlementBehaviour : uint8_t
{
	ERequestEntitlementBehaviour__Default = 0,
	ERequestEntitlementBehaviour__ForceRefresh = 1,
	ERequestEntitlementBehaviour__ERequestEntitlementBehaviour_MAX = 2
};


// Enum Athena.EEntitlementConsumptionState
enum class EEntitlementConsumptionState : uint8_t
{
	EEntitlementConsumptionState__Failed = 0,
	EEntitlementConsumptionState__Succeeded = 1,
	EEntitlementConsumptionState__TimedOut = 2,
	EEntitlementConsumptionState__EEntitlementConsumptionState_MAX = 3
};


// Enum Athena.ERefreshEntitlementBehaviour
enum class ERefreshEntitlementBehaviour : uint8_t
{
	ERefreshEntitlementBehaviour__TryUsingCachedServicesEntitlements = 0,
	ERefreshEntitlementBehaviour__FullRefresh = 1,
	ERefreshEntitlementBehaviour__ERefreshEntitlementBehaviour_MAX = 2
};


// Enum Athena.EWalletBalanceStatus
enum class EWalletBalanceStatus : uint8_t
{
	EWalletBalanceStatus__Unknown  = 0,
	EWalletBalanceStatus__Valid    = 1,
	EWalletBalanceStatus__EWalletBalanceStatus_MAX = 2
};


// Enum Athena.ECatalogOfferAvailability
enum class ECatalogOfferAvailability : uint8_t
{
	ECatalogOfferAvailability__Available = 0,
	ECatalogOfferAvailability__AlreadyOwned = 1,
	ECatalogOfferAvailability__Locked = 2,
	ECatalogOfferAvailability__Info = 3,
	ECatalogOfferAvailability__Hide = 4,
	ECatalogOfferAvailability__Unaffordable = 5,
	ECatalogOfferAvailability__ECatalogOfferAvailability_MAX = 6
};


// Enum Athena.EPurchaseRequestFailureReason
enum class EPurchaseRequestFailureReason : uint8_t
{
	EPurchaseRequestFailureReason__ServiceUnavailable = 0,
	EPurchaseRequestFailureReason__OfferUnavailable = 1,
	EPurchaseRequestFailureReason__InsufficientFunds = 2,
	EPurchaseRequestFailureReason__RequestTimeout = 3,
	EPurchaseRequestFailureReason__PurchaseAlreadyPending = 4,
	EPurchaseRequestFailureReason__EPurchaseRequestFailureReason_MAX = 5
};


// Enum Athena.EShopOfferAvailability
enum class EShopOfferAvailability : uint8_t
{
	EShopOfferAvailability__Available = 0,
	EShopOfferAvailability__AlreadyOwned = 1,
	EShopOfferAvailability__Locked = 2,
	EShopOfferAvailability__Info   = 3,
	EShopOfferAvailability__Hide   = 4,
	EShopOfferAvailability__EShopOfferAvailability_MAX = 5
};


// Enum Athena.EProjectileWeaponFireType
enum class EProjectileWeaponFireType : uint8_t
{
	EProjectileWeaponFireType__Aiming = 0,
	EProjectileWeaponFireType__HipFire = 1,
	EProjectileWeaponFireType__MAX = 2,
	EProjectileWeaponFireType__EProjectileWeaponFireType_MAX = 3
};


// Enum Athena.EProjectileWeaponType
enum class EProjectileWeaponType : uint8_t
{
	EProjectileWeaponType__Pistol  = 0,
	EProjectileWeaponType__Blunderbuss = 1,
	EProjectileWeaponType__EyeOfReach = 2,
	EProjectileWeaponType__MAX     = 3,
	EProjectileWeaponType__EProjectileWeaponType_MAX = 4
};


// Enum Athena.EProjectileWeaponState
enum class EProjectileWeaponState : uint8_t
{
	EProjectileWeaponState__Equipping = 0,
	EProjectileWeaponState__Idle   = 1,
	EProjectileWeaponState__Aiming = 2,
	EProjectileWeaponState__Recoil = 3,
	EProjectileWeaponState__Reloading = 4,
	EProjectileWeaponState__EProjectileWeaponState_MAX = 5
};


// Enum Athena.EReapersMarkTrackedVoyageType
enum class EReapersMarkTrackedVoyageType : uint8_t
{
	EReapersMarkTrackedVoyageType__None = 0,
	EReapersMarkTrackedVoyageType__NonAllianceVoyage = 1,
	EReapersMarkTrackedVoyageType__AllianceVoyage = 2,
	EReapersMarkTrackedVoyageType__EReapersMarkTrackedVoyageType_MAX = 3
};


// Enum Athena.ERevealState
enum class ERevealState : uint8_t
{
	ERevealState__Hidden           = 0,
	ERevealState__FarRevealed      = 1,
	ERevealState__CloseRevealed    = 2,
	ERevealState__ERevealState_MAX = 3
};


// Enum Athena.ERewardRequestFailureReason
enum class ERewardRequestFailureReason : uint8_t
{
	ERewardRequestFailureReason__FailedToProcess = 0,
	ERewardRequestFailureReason__TimedOut = 1,
	ERewardRequestFailureReason__Unknown = 2,
	ERewardRequestFailureReason__ERewardRequestFailureReason_MAX = 3
};


// Enum Athena.EShadowAIFormState
enum class EShadowAIFormState : uint8_t
{
	EShadowAIFormState__Invalid    = 0,
	EShadowAIFormState__Light      = 1,
	EShadowAIFormState__Dark       = 2,
	EShadowAIFormState__EShadowAIFormState_MAX = 3
};


// Enum Athena.EShipBuilderState
enum class EShipBuilderState : uint8_t
{
	EShipBuilderState__Idle        = 0,
	EShipBuilderState__LoadingTemplate = 1,
	EShipBuilderState__CustomizingParts = 2,
	EShipBuilderState__EShipBuilderState_MAX = 3
};


// Enum Athena.EShipBuilderErrorCode
enum class EShipBuilderErrorCode : uint8_t
{
	EShipBuilderErrorCode__AlreadyInProgress = 0,
	EShipBuilderErrorCode__AssetLoadingFailure = 1,
	EShipBuilderErrorCode__FailedToSpawnActor = 2,
	EShipBuilderErrorCode__FailedToBuildParts = 3,
	EShipBuilderErrorCode__InvalidParameter = 4,
	EShipBuilderErrorCode__InvalidShipDesc = 5,
	EShipBuilderErrorCode__Cancelled = 6,
	EShipBuilderErrorCode__SpawnedActorWasNotAShip = 7,
	EShipBuilderErrorCode__EShipBuilderErrorCode_MAX = 8
};


// Enum Athena.EShipPartCustomizationState
enum class EShipPartCustomizationState : uint8_t
{
	EShipPartCustomizationState__Idle = 0,
	EShipPartCustomizationState__SearchingForPart = 1,
	EShipPartCustomizationState__CustomizingPart = 2,
	EShipPartCustomizationState__RegisteringPart = 3,
	EShipPartCustomizationState__EShipPartCustomizationState_MAX = 4
};


// Enum Athena.EShipParticleParam
enum class EShipParticleParam : uint8_t
{
	EShipParticleParam__None       = 0,
	EShipParticleParam__DeckWater  = 1,
	EShipParticleParam__FloodLevel = 2,
	EShipParticleParam__Total      = 3,
	EShipParticleParam__EShipParticleParam_MAX = 4
};


// Enum Athena.ESkellyFortDestructionReason
enum class ESkellyFortDestructionReason : uint8_t
{
	ESkellyFortDestructionReason__Defeated = 0,
	ESkellyFortDestructionReason__Despawn = 1,
	ESkellyFortDestructionReason__ESkellyFortDestructionReason_MAX = 2
};


// Enum Athena.ESlidingDoorDirection
enum class ESlidingDoorDirection : uint8_t
{
	ESlidingDoorDirection__Up      = 0,
	ESlidingDoorDirection__Down    = 1,
	ESlidingDoorDirection__ESlidingDoorDirection_MAX = 2
};


// Enum Athena.ESlidingDoorState
enum class ESlidingDoorState : uint8_t
{
	ESlidingDoorState__Closed      = 0,
	ESlidingDoorState__Opening     = 1,
	ESlidingDoorState__Open        = 2,
	ESlidingDoorState__ESlidingDoorState_MAX = 3
};


// Enum Athena.EStaggerReason
enum class EStaggerReason : uint8_t
{
	EStaggerReason__Drunk          = 0,
	EStaggerReason__Earthquake     = 1,
	EStaggerReason__NumReasons     = 2,
	EStaggerReason__EStaggerReason_MAX = 3
};


// Enum Athena.EStunnedActionStateItemWielding
enum class EStunnedActionStateItemWielding : uint8_t
{
	EStunnedActionStateItemWielding__Allowed = 0,
	EStunnedActionStateItemWielding__Disallowed = 1,
	EStunnedActionStateItemWielding__EStunnedActionStateItemWielding_MAX = 2
};


// Enum Athena.EStunnedActionStateDurationType
enum class EStunnedActionStateDurationType : uint8_t
{
	EStunnedActionStateDurationType__Definite = 0,
	EStunnedActionStateDurationType__Indefinite = 1,
	EStunnedActionStateDurationType__EStunnedActionStateDurationType_MAX = 2
};


// Enum Athena.ELightningHitTarget
enum class ELightningHitTarget : uint8_t
{
	ELightningHitTarget__RandomLocation = 0,
	ELightningHitTarget__Player    = 1,
	ELightningHitTarget__NearPlayer = 2,
	ELightningHitTarget__Ship      = 3,
	ELightningHitTarget__ShipNearMiss = 4,
	ELightningHitTarget__Total     = 5,
	ELightningHitTarget__ELightningHitTarget_MAX = 6
};


// Enum Athena.ESwimmingMode
enum class ESwimmingMode : uint8_t
{
	ESwimmingMode__SwimmingMode_None = 0,
	ESwimmingMode__SwimmingMode_Swimming = 1,
	ESwimmingMode__SwimmingMode_Sinking = 2,
	ESwimmingMode__SwimmingMode_MAX = 3
};


// Enum Athena.ESwimmingCreatureType
enum class ESwimmingCreatureType : uint8_t
{
	ESwimmingCreatureType__SwimmingCreature = 0,
	ESwimmingCreatureType__Shark   = 1,
	ESwimmingCreatureType__TinyShark = 2,
	ESwimmingCreatureType__ESwimmingCreatureType_MAX = 3
};


// Enum Athena.EStepsTriggerState
enum class EStepsTriggerState : uint8_t
{
	EStepsTriggerState__Closed     = 0,
	EStepsTriggerState__Opening    = 1,
	EStepsTriggerState__Open       = 2,
	EStepsTriggerState__EStepsTriggerState_MAX = 3
};


// Enum Athena.ETeleportActionStateConditions
enum class ETeleportActionStateConditions : uint8_t
{
	ETeleportActionStateConditions__AllConditions = 0,
	ETeleportActionStateConditions__NoConditions = 1,
	ETeleportActionStateConditions__ETeleportActionStateConditions_MAX = 2
};


// Enum Athena.ETeleportActionStateFadeType
enum class ETeleportActionStateFadeType : uint8_t
{
	ETeleportActionStateFadeType__Fade = 0,
	ETeleportActionStateFadeType__NoFade = 1,
	ETeleportActionStateFadeType__ETeleportActionStateFadeType_MAX = 2
};


// Enum Athena.EChestEntitlementActionType
enum class EChestEntitlementActionType : uint8_t
{
	EChestEntitlementActionType__Equip = 0,
	EChestEntitlementActionType__Unequip = 1,
	EChestEntitlementActionType__Clear = 2,
	EChestEntitlementActionType__Randomise = 3,
	EChestEntitlementActionType__EChestEntitlementActionType_MAX = 4
};


// Enum Athena.EVoyageDisplayState
enum class EVoyageDisplayState : uint8_t
{
	Default                        = 0,
	Proposed                       = 1,
	EVoyageDisplayState_MAX        = 2
};


// Enum Athena.EVoyageChapterProgressionType
enum class EVoyageChapterProgressionType : uint8_t
{
	EVoyageChapterProgressionType__DrivenByAnyQuestCompletion = 0,
	EVoyageChapterProgressionType__DrivenBySpecificQuestCompletion = 1,
	EVoyageChapterProgressionType__EVoyageChapterProgressionType_MAX = 2
};


// Enum Athena.EContestType
enum class EContestType : uint8_t
{
	EContestType__Race             = 0,
	EContestType__PVP              = 1,
	EContestType__PVQ              = 2,
	EContestType__MAX              = 3,
	EContestType__EContestType_MAX = 4
};


// Enum Athena.EMatchmakingServerType
enum class EMatchmakingServerType : uint8_t
{
	EMatchmakingServerType__Adventure = 0,
	EMatchmakingServerType__Contest = 1,
	EMatchmakingServerType__EMatchmakingServerType_MAX = 2
};


// Enum Athena.EMurkWaterModifierZoneState
enum class EMurkWaterModifierZoneState : uint8_t
{
	EMurkWaterModifierZoneState__Active = 0,
	EMurkWaterModifierZoneState__Inactive = 1,
	EMurkWaterModifierZoneState__Activating = 2,
	EMurkWaterModifierZoneState__Deactivating = 3,
	EMurkWaterModifierZoneState__EMurkWaterModifierZoneState_MAX = 4
};


// Enum Athena.EWeepingState
enum class EWeepingState : uint8_t
{
	EWeepingState__Weeping         = 0,
	EWeepingState__Calm            = 1,
	EWeepingState__EWeepingState_MAX = 2
};


// Enum Athena.EWheelFractureLabel
enum class EWheelFractureLabel : uint8_t
{
	EWheelFractureLabel__West      = 0,
	EWheelFractureLabel__East      = 1,
	EWheelFractureLabel__South     = 2,
	EWheelFractureLabel__EWheelFractureLabel_MAX = 3
};


// Enum Athena.ELocalGameChatStatus
enum class ELocalGameChatStatus : uint8_t
{
	ELocalGameChatStatus__Undefined = 0,
	ELocalGameChatStatus__NoMicrophone = 1,
	ELocalGameChatStatus__MicrophoneMuted = 2,
	ELocalGameChatStatus__InPartyChat = 3,
	ELocalGameChatStatus__Ready    = 4,
	ELocalGameChatStatus__ELocalGameChatStatus_MAX = 5
};


// Enum Athena.EVoiceChatAudioDevice
enum class EVoiceChatAudioDevice : uint8_t
{
	EVoiceChatAudioDevice__None    = 0,
	EVoiceChatAudioDevice__Headset = 1,
	EVoiceChatAudioDevice__Kinect  = 2,
	EVoiceChatAudioDevice__EVoiceChatAudioDevice_MAX = 3
};


// Enum Athena.EBootflowError
enum class EBootflowError : uint8_t
{
	EBootflowError__None           = 0,
	EBootflowError__Unknown        = 1,
	EBootflowError__AthenaGameInstanceFailedToConnectToServer = 2,
	EBootflowError__AthenaGameInstanceActiveConnectionToServerLost = 3,
	EBootflowError__AthenaGameInstanceActiveConnectionToServerTimedOut = 4,
	EBootflowError__AthenaGameInstanceInitialConnectionToServerTimedOut = 5,
	EBootflowError__AthenaGameInstancePendingConnectionToServerTimedOut = 6,
	EBootflowError__AthenaGameInstancePendingConnectionToServerLost = 7,
	EBootflowError__AthenaGameInstanceGameVersionMismatch = 8,
	EBootflowError__AthenaGameInstanceGenericDisconnectMessage = 9,
	EBootflowError__AthenaGameInstanceNetDriverFailure = 10,
	EBootflowError__AthenaGameInstanceInvalidFeatureConfig = 11,
	EBootflowError__AthenaGameInstanceRPCSpamDetected = 12,
	EBootflowError__AthenaGameInstancePlayerDeemedInactive = 13,
	EBootflowError__AthenaGameInstanceInvalidServerURL = 14,
	EBootflowError__AthenaGameInstanceGameAssetMismatch = 15,
	EBootflowError__AthenaGameInstanceGenericTravelError = 16,
	EBootflowError__ClientBootflowPrimaryPlayerSignedOut = 17,
	EBootflowError__ClientBootflowPlayerSuspendedGame = 18,
	EBootflowError__ClientBootflowLostConnectionToXboxLive = 19,
	EBootflowError__ClientBootflowEthernetConnectionUnplugged = 20,
	EBootflowError__ClientEvicted  = 21,
	EBootflowError__ClientInGameStateWasIdleForTooLong = 22,
	EBootflowError__ClientInGameStateUnableToFindLocalUserId = 23,
	EBootflowError__ClientInGameStateUnableToObtainLocalPlayerInterface = 24,
	EBootflowError__ClientInGameStateStopMatchmakingFailed = 25,
	EBootflowError__ClientJoinServerStateFailed = 26,
	EBootflowError__CrewMatchmakingStateLocalUserHasInvalidId = 27,
	EBootflowError__CrewMatchmakingStateUnableToObtainLocalUserId = 28,
	EBootflowError__CrewMatchmakingStateUnableToObtainLocalPlayerInterface = 29,
	EBootflowError__CrewMatchmakingStateMatchmakingFailed = 30,
	EBootflowError__CrewSessionStateUnableToObtainLocalUserId = 31,
	EBootflowError__CrewSessionStateUnableToObtainLocalPlayerInterface = 32,
	EBootflowError__CrewSessionStateFailedToCreateCrewSession = 33,
	EBootflowError__CrewSessionOnSessionLost = 34,
	EBootflowError__DiscoveryServiceStateRequestFailedNotAuthorized = 35,
	EBootflowError__DiscoveryServiceStateRequestFailed = 36,
	EBootflowError__EmblemDefinitionRetrievalFailed = 37,
	EBootflowError__EngageStateInviteHadInvalidControllerId = 38,
	EBootflowError__EngageStateNoLocalPlayerFound = 39,
	EBootflowError__EntryLevelStateFailedToLoadDefaultMap = 40,
	EBootflowError__EntryLevelStateFailed = 41,
	EBootflowError__LoadLevelStateTimeout = 42,
	EBootflowError__LoadLevelStateFailed = 43,
	EBootflowError__LoadUserSettingsStateFailed = 44,
	EBootflowError__LoginTokenExchangeFailed = 45,
	EBootflowError__LoginTokenExchangeFailedCannotRefreshExpiredToken = 46,
	EBootflowError__LoginTokenExchangeFailedTitleVersionInvalid = 47,
	EBootflowError__LoginTokenExchangeFailedPlayerBannedTemp = 48,
	EBootflowError__LoginTokenExchangeFailedPlayerBannedPerm = 49,
	EBootflowError__LoginTokenExchangePlayerFailedFlightingCheck = 50,
	EBootflowError__SelectUserStateFailedToShowSignInUI = 51,
	EBootflowError__SelectUserStateFailedToObtainValidControllerId = 52,
	EBootflowError__SelectUserStateFailedToObtainValidLocalPlayer = 53,
	EBootflowError__SelectUserStateNotConnectedToLive = 54,
	EBootflowError__SelectUserStateNotSignedInWhileUnattended = 55,
	EBootflowError__SelectUserStateUserDoesNotHaveUniqueNetId = 56,
	EBootflowError__SelectUserStateUserDidNotSignIn = 57,
	EBootflowError__SelectUserStateUserIsGuest = 58,
	EBootflowError__SelectUserStateInsufficientPrivilegesToPlay = 59,
	EBootflowError__SelectUserStateInvalidIdentityInterface = 60,
	EBootflowError__ServerMatchmakingStateSandboxDisabled = 61,
	EBootflowError__ServerMatchmakingStateUnableToObtainCrewId = 62,
	EBootflowError__ServerMatchmakingStateUnableToObtainLocalPlayerInterface = 63,
	EBootflowError__ServerMatchmakingStateInvalidPirateIdentity = 64,
	EBootflowError__ServerMatchmakingStateNoServersAvailable = 65,
	EBootflowError__ServerMatchmakingStateInvalidMatchmakingResponse = 66,
	EBootflowError__ServerMatchmakingStateInvalidResponse = 67,
	EBootflowError__ServerMatchmakingStateMatchmakingTimedOut = 68,
	EBootflowError__ServerMatchmakingStateUnexpectedResult = 69,
	EBootflowError__ServerMatchmakingStateJoinRefused = 70,
	EBootflowError__SetupConfigurationServiceStateConfigServiceRequestFailed = 71,
	EBootflowError__SetupCrewSessionStateFailedToJoinCrewSession = 72,
	EBootflowError__SetupCrewSessionStateFailedToCreateCrewSession = 73,
	EBootflowError__SetupServiceBridgeStateFailed = 74,
	EBootflowError__SetupTelemetryDispatcherStateFailed = 75,
	EBootflowError__CrewSessionHandlerJoinFailedAsCrewIsFull = 76,
	EBootflowError__CrewSessionHandlerJoinFailedAsCrewDoesntExist = 77,
	EBootflowError__CrewSessionHandlerJoinFailedAsCouldNotRetrieveAddress = 78,
	EBootflowError__CrewSessionHandlerJoinFailedAsUnknownErrorOccurred = 79,
	EBootflowError__PirateSelectionStateUnableToObtainLocalPlayerInterface = 80,
	EBootflowError__PirateSelectionStateUnableToRetrievePirates = 81,
	EBootflowError__PirateSelectionStateUnableToCreatePirate = 82,
	EBootflowError__SessionSelectInvalidSessionTypeSpecified = 83,
	EBootflowError__InvitePrivilegesCheckFailed = 84,
	EBootflowError__InviteUnableToRetrieveSession = 85,
	EBootflowError__InviteSessionFull = 86,
	EBootflowError__InviteSessionUnknownFailure = 87,
	EBootflowError__FailedToEnumerateEntitlements = 88,
	EBootflowError__TestFailed     = 89,
	EBootflowError__TestNetworkError = 90,
	EBootflowError__Max            = 91,
	EBootflowError__EBootflowError_MAX = 92
};


// Enum Athena.EBootflowErrorPriority
enum class EBootflowErrorPriority : uint8_t
{
	EBootflowErrorPriority__High   = 0,
	EBootflowErrorPriority__AboveNormal = 1,
	EBootflowErrorPriority__Normal = 2,
	EBootflowErrorPriority__BelowNormal = 3,
	EBootflowErrorPriority__Low    = 4,
	EBootflowErrorPriority__EBootflowErrorPriority_MAX = 5
};


// Enum Athena.EStoreAsyncResult
enum class EStoreAsyncResult : uint8_t
{
	EStoreAsyncResult__Unknown     = 0,
	EStoreAsyncResult__GetAccessTokenInvalidHttpRequest = 1,
	EStoreAsyncResult__GetAccessTokenTimeout = 2,
	EStoreAsyncResult__GetAccessTokenCancelled = 3,
	EStoreAsyncResult__GetAccessTokenFailure = 4,
	EStoreAsyncResult__GetPurchaseRedemptionTokenInterfaceInvalid = 5,
	EStoreAsyncResult__GetPurchaseRedemptionTokenOnlineStoreFailure = 6,
	EStoreAsyncResult__GetPurchaseRedemptionTokenFailure = 7,
	EStoreAsyncResult__PostPurchaseRedemptionTokenInvalidHttpRequest = 8,
	EStoreAsyncResult__PostPurchaseRedemptionTokenCancelled = 9,
	EStoreAsyncResult__PostPurchaseRedemptionTokenTimeout = 10,
	EStoreAsyncResult__PostPurchaseRedemptionTokenFailure = 11,
	EStoreAsyncResult__Success     = 12,
	EStoreAsyncResult__EStoreAsyncResult_MAX = 13
};


// Enum Athena.EWaitForLoadingScreenSubState
enum class EWaitForLoadingScreenSubState : uint8_t
{
	EWaitForLoadingScreenSubState__Invalid = 0,
	EWaitForLoadingScreenSubState__CacheLoadingScreenDataAssetParams = 1,
	EWaitForLoadingScreenSubState__CacheLoadingScreenLoadingScreenParams = 2,
	EWaitForLoadingScreenSubState__CacheLoadingScreenContent = 3,
	EWaitForLoadingScreenSubState__Complete = 4,
	EWaitForLoadingScreenSubState__EWaitForLoadingScreenSubState_MAX = 5
};


// Enum Athena.EMeleeAttackMoveCorrectionReason
enum class EMeleeAttackMoveCorrectionReason : uint8_t
{
	EMeleeAttackMoveCorrectionReason__NotSpecified = 0,
	EMeleeAttackMoveCorrectionReason__SpedUpTooSoon = 1,
	EMeleeAttackMoveCorrectionReason__EMeleeAttackMoveCorrectionReason_MAX = 2
};


// Enum Athena.EInteractableOverlayActionType
enum class EInteractableOverlayActionType : uint8_t
{
	EInteractableOverlayActionType__None = 0,
	EInteractableOverlayActionType__Activate = 1,
	EInteractableOverlayActionType__EInteractableOverlayActionType_MAX = 2
};


// Enum Athena.EServerAsyncLoadingAckReason
enum class EServerAsyncLoadingAckReason : uint8_t
{
	EServerAsyncLoadingAckReason__Invalid = 0,
	EServerAsyncLoadingAckReason__Complete = 1,
	EServerAsyncLoadingAckReason__Timeout = 2,
	EServerAsyncLoadingAckReason__EServerAsyncLoadingAckReason_MAX = 3
};


// Enum Athena.EServerTeleportAckReason
enum class EServerTeleportAckReason : uint8_t
{
	EServerTeleportAckReason__Invalid = 0,
	EServerTeleportAckReason__Complete = 1,
	EServerTeleportAckReason__Timeout = 2,
	EServerTeleportAckReason__EServerTeleportAckReason_MAX = 3
};


// Enum Athena.EServerCameraFadeAckReason
enum class EServerCameraFadeAckReason : uint8_t
{
	EServerCameraFadeAckReason__Invalid = 0,
	EServerCameraFadeAckReason__Complete = 1,
	EServerCameraFadeAckReason__Timeout = 2,
	EServerCameraFadeAckReason__EServerCameraFadeAckReason_MAX = 3
};


// Enum Athena.EConsumeEntitlementFailureReason
enum class EConsumeEntitlementFailureReason : uint8_t
{
	EConsumeEntitlementFailureReason__ServiceUnavailable = 0,
	EConsumeEntitlementFailureReason__ItemNotFound = 1,
	EConsumeEntitlementFailureReason__RequestTimeout = 2,
	EConsumeEntitlementFailureReason__Unknown = 3,
	EConsumeEntitlementFailureReason__EConsumeEntitlementFailureReason_MAX = 4
};


// Enum Athena.ERewardDestinationType
enum class ERewardDestinationType : uint8_t
{
	ERewardDestinationType__Player = 0,
	ERewardDestinationType__Crew   = 1,
	ERewardDestinationType__Alliance = 2,
	ERewardDestinationType__ERewardDestinationType_MAX = 3
};


// Enum Athena.ECrewDestroyedReason
enum class ECrewDestroyedReason : uint8_t
{
	ECrewDestroyedReason__AllCrewMembersRemoved = 0,
	ECrewDestroyedReason__ServerMigrated = 1,
	ECrewDestroyedReason__ECrewDestroyedReason_MAX = 2
};


// Enum Athena.EQuestGenAssetSuffix
enum class EQuestGenAssetSuffix : uint8_t
{
	EQuestGenAssetSuffix__Default  = 0,
	EQuestGenAssetSuffix__Underground = 1,
	EQuestGenAssetSuffix__AISpawn  = 2,
	EQuestGenAssetSuffix__EQuestGenAssetSuffix_MAX = 3
};


// Enum Athena.EPurchaseOfferFailureReason
enum class EPurchaseOfferFailureReason : uint8_t
{
	EPurchaseOfferFailureReason__ServiceUnavailable = 0,
	EPurchaseOfferFailureReason__OfferUnavailable = 1,
	EPurchaseOfferFailureReason__InsufficientFunds = 2,
	EPurchaseOfferFailureReason__EPurchaseOfferFailureReason_MAX = 3
};


// Enum Athena.EWalletBalanceRequestFailureReason
enum class EWalletBalanceRequestFailureReason : uint8_t
{
	EWalletBalanceRequestFailureReason__ServiceUnavailable = 0,
	EWalletBalanceRequestFailureReason__RequestTimeout = 1,
	EWalletBalanceRequestFailureReason__PendingRequest = 2,
	EWalletBalanceRequestFailureReason__RequestCancelled = 3,
	EWalletBalanceRequestFailureReason__EWalletBalanceRequestFailureReason_MAX = 4
};


// Enum Athena.EHttpRequestTelemetryResult
enum class EHttpRequestTelemetryResult : uint8_t
{
	EHttpRequestTelemetryResult__None = 0,
	EHttpRequestTelemetryResult__Completed = 1,
	EHttpRequestTelemetryResult__Failed = 2,
	EHttpRequestTelemetryResult__Cancelled = 3,
	EHttpRequestTelemetryResult__EHttpRequestTelemetryResult_MAX = 4
};


// Enum Athena.EServerMatchmakingFailureReason
enum class EServerMatchmakingFailureReason : uint8_t
{
	EServerMatchmakingFailureReason__NoServersAvailable = 0,
	EServerMatchmakingFailureReason__CrewServerRequestBeingProcessed = 1,
	EServerMatchmakingFailureReason__CrewBeingMigrated = 2,
	EServerMatchmakingFailureReason__SandboxDisabled = 3,
	EServerMatchmakingFailureReason__EServerMatchmakingFailureReason_MAX = 4
};


// Enum Athena.EStoreRemoteServiceFutureStatus
enum class EStoreRemoteServiceFutureStatus : uint8_t
{
	EStoreRemoteServiceFutureStatus__Unknown = 0,
	EStoreRemoteServiceFutureStatus__NotStarted = 1,
	EStoreRemoteServiceFutureStatus__Failed = 2,
	EStoreRemoteServiceFutureStatus__Succeeded = 3,
	EStoreRemoteServiceFutureStatus__Cancelled = 4,
	EStoreRemoteServiceFutureStatus__TimedOut = 5,
	EStoreRemoteServiceFutureStatus__EStoreRemoteServiceFutureStatus_MAX = 6
};


// Enum Athena.EPreLoginDeniedReason
enum class EPreLoginDeniedReason : uint8_t
{
	EPreLoginDeniedReason__None    = 0,
	EPreLoginDeniedReason__PirateRetreival = 1,
	EPreLoginDeniedReason__EntitlementsRetrieval = 2,
	EPreLoginDeniedReason__MPSDValidation = 3,
	EPreLoginDeniedReason__CrewNoLongerOnServer = 4,
	EPreLoginDeniedReason__CrewAssignmentFailed = 5,
	EPreLoginDeniedReason__AuthTokenValidation = 6,
	EPreLoginDeniedReason__EPreLoginDeniedReason_MAX = 7
};


// Enum Athena.ETestTelemetryJsonSchemaWriterUEnum
enum class ETestTelemetryJsonSchemaWriterUEnum : uint8_t
{
	ETestTelemetryJsonSchemaWriterUEnum__None = 0,
	ETestTelemetryJsonSchemaWriterUEnum__FirstValue = 1,
	ETestTelemetryJsonSchemaWriterUEnum__SecondValue = 2,
	ETestTelemetryJsonSchemaWriterUEnum__ETestTelemetryJsonSchemaWriterUEnum_MAX = 3
};


// Enum Athena.EStyleModifiers
enum class EStyleModifiers : uint8_t
{
	EStyleModifiers__Hide          = 0,
	EStyleModifiers__EStyleModifiers_MAX = 1
};


// Enum Athena.EQuestResultFromDig
enum class EQuestResultFromDig : uint8_t
{
	EQuestResultFromDig__None      = 0,
	EQuestResultFromDig__Chest     = 1,
	EQuestResultFromDig__QuestItem = 2,
	EQuestResultFromDig__EQuestResultFromDig_MAX = 3
};


// Enum Athena.EBuoyantObjectState
enum class EBuoyantObjectState : uint8_t
{
	EBuoyantObjectState__Rising    = 0,
	EBuoyantObjectState__Floating  = 1,
	EBuoyantObjectState__Sinking   = 2,
	EBuoyantObjectState__Disappearing = 3,
	EBuoyantObjectState__EBuoyantObjectState_MAX = 4
};


// Enum Athena.EAttitudeTowardActor
enum class EAttitudeTowardActor : uint8_t
{
	EAttitudeTowardActor__Friendly = 0,
	EAttitudeTowardActor__Neutral  = 1,
	EAttitudeTowardActor__Hostile  = 2,
	EAttitudeTowardActor__EAttitudeTowardActor_MAX = 3
};


// Enum Athena.ECharacterType
enum class ECharacterType : uint8_t
{
	ECharacterType__Ghost          = 0,
	ECharacterType__Character      = 1,
	ECharacterType__ECharacterType_MAX = 2
};


// Enum Athena.EActionDisplayPriority
enum class EActionDisplayPriority : uint8_t
{
	EActionDisplayPriority__Primary = 0,
	EActionDisplayPriority__Secondary = 1,
	EActionDisplayPriority__Tertiary = 2,
	EActionDisplayPriority__Total  = 3,
	EActionDisplayPriority__EActionDisplayPriority_MAX = 4
};


// Enum Athena.EInteractableState
enum class EInteractableState : uint8_t
{
	EInteractableState__Interactable = 0,
	EInteractableState__DisableDescribe = 1,
	EInteractableState__DisabledDontDescribe = 2,
	EInteractableState__EInteractableState_MAX = 3
};


// Enum Athena.ETooltipHighlightType
enum class ETooltipHighlightType : uint8_t
{
	ETooltipHighlightType__Active  = 0,
	ETooltipHighlightType__GreyedOut = 1,
	ETooltipHighlightType__None    = 2,
	ETooltipHighlightType__ETooltipHighlightType_MAX = 3
};


// Enum Athena.ETooltipSpinnerType
enum class ETooltipSpinnerType : uint8_t
{
	ETooltipSpinnerType__None      = 0,
	ETooltipSpinnerType__Progress  = 1,
	ETooltipSpinnerType__ETooltipSpinnerType_MAX = 2
};


// Enum Athena.ETrackedActorType
enum class ETrackedActorType : uint8_t
{
	ETrackedActorType__Unknown     = 0,
	ETrackedActorType__AI_Fauna    = 1,
	ETrackedActorType__AI_Kraken   = 2,
	ETrackedActorType__AI_Megalodon = 3,
	ETrackedActorType__AI_Pets     = 4,
	ETrackedActorType__AI_Shark    = 5,
	ETrackedActorType__AI_Ship     = 6,
	ETrackedActorType__AI_Ship_Aggressive = 7,
	ETrackedActorType__AI_Ship_Passive = 8,
	ETrackedActorType__AI_Skeleton = 9,
	ETrackedActorType__AI_SwimmingCreature = 10,
	ETrackedActorType__Booty       = 11,
	ETrackedActorType__Earthquake  = 12,
	ETrackedActorType__FogBank     = 13,
	ETrackedActorType__Geyser      = 14,
	ETrackedActorType__Mermaid     = 15,
	ETrackedActorType__NPC         = 16,
	ETrackedActorType__Player      = 17,
	ETrackedActorType__Rowboat     = 18,
	ETrackedActorType__Ship_Large  = 19,
	ETrackedActorType__Ship_Medium = 20,
	ETrackedActorType__Ship_Small  = 21,
	ETrackedActorType__ShipCloud   = 22,
	ETrackedActorType__Shipwreck   = 23,
	ETrackedActorType__SkeletonThrone = 24,
	ETrackedActorType__SkullCloud  = 25,
	ETrackedActorType__StorageContainer = 26,
	ETrackedActorType__StorageContainerBuoyant = 27,
	ETrackedActorType__Storm       = 28,
	ETrackedActorType__SunkenCurseArtefact = 29,
	ETrackedActorType__SuperHeatedWater = 30,
	ETrackedActorType__Volcano     = 31,
	ETrackedActorType__MAX         = 32,
	ETrackedActorType__ETrackedActorType_MAX = 33
};


// Enum Athena.ETelemetryPlatformId
enum class ETelemetryPlatformId : uint8_t
{
	ETelemetryPlatformId__Undefined = 0,
	ETelemetryPlatformId__Xbox     = 1,
	ETelemetryPlatformId__Windows  = 2,
	ETelemetryPlatformId__DevPC    = 3,
	ETelemetryPlatformId__ETelemetryPlatformId_MAX = 4
};


// Enum Athena.EVfxRegion
enum class EVfxRegion : uint8_t
{
	EVfxRegion__None               = 0,
	EVfxRegion__ShipExterior       = 1,
	EVfxRegion__ShipInterior       = 2,
	EVfxRegion__EVfxRegion_MAX     = 3
};


// Enum Athena.ERewardType
enum class ERewardType : uint8_t
{
	ERewardType__XP                = 0,
	ERewardType__Gold              = 1,
	ERewardType__Entitlement       = 2,
	ERewardType__WaywardTokens     = 3,
	ERewardType__Level             = 4,
	ERewardType__Emblem            = 5,
	ERewardType__Achievement       = 6,
	ERewardType__ERewardType_MAX   = 7
};


// Enum Athena.EItemType
enum class EItemType : uint8_t
{
	EItemType__Weapon              = 0,
	EItemType__Item                = 1,
	EItemType__Quest               = 2,
	EItemType__Invalid             = 3,
	EItemType__EItemType_MAX       = 4
};


// Enum Athena.ERadialMenuInputModality
enum class ERadialMenuInputModality : uint8_t
{
	ERadialMenuInputModality__None = 0,
	ERadialMenuInputModality__Keyboard = 1,
	ERadialMenuInputModality__Gamepad = 2,
	ERadialMenuInputModality__ERadialMenuInputModality_MAX = 3
};


// Enum Athena.EWieldItemReturnCode
enum class EWieldItemReturnCode : uint8_t
{
	EWieldItemReturnCode__Success  = 0,
	EWieldItemReturnCode__NoAuthority = 1,
	EWieldItemReturnCode__UnableToDisplace = 2,
	EWieldItemReturnCode__InvalidItem = 3,
	EWieldItemReturnCode__WaitingForUnstash = 4,
	EWieldItemReturnCode__EWieldItemReturnCode_MAX = 5
};


// Enum Athena.EDropItemReturnCode
enum class EDropItemReturnCode : uint8_t
{
	EDropItemReturnCode__NothingToDrop = 0,
	EDropItemReturnCode__Success   = 1,
	EDropItemReturnCode__DroppingProhibited = 2,
	EDropItemReturnCode__EDropItemReturnCode_MAX = 3
};


// Enum Athena.EStowMethod
enum class EStowMethod : uint8_t
{
	EStowMethod__Unequip           = 0,
	EStowMethod__Stash             = 1,
	EStowMethod__EStowMethod_MAX   = 2
};


// Enum Athena.EStashReason
enum class EStashReason : uint8_t
{
	EStashReason__Locomotion       = 0,
	EStashReason__Docking          = 1,
	EStashReason__Sprinting        = 2,
	EStashReason__Using            = 3,
	EStashReason__Dead             = 4,
	EStashReason__Spawn            = 5,
	EStashReason__AIPartsChange    = 6,
	EStashReason__Emote            = 7,
	EStashReason__EStashReason_MAX = 8
};


// Enum Athena.ECanAddItemQueryResult
enum class ECanAddItemQueryResult : uint8_t
{
	ECanAddItemQueryResult__Success = 0,
	ECanAddItemQueryResult__SlotFull = 1,
	ECanAddItemQueryResult__Invalid = 2,
	ECanAddItemQueryResult__ECanAddItemQueryResult_MAX = 3
};


// Enum Athena.EItemLifetimeManagement
enum class EItemLifetimeManagement : uint8_t
{
	EItemLifetimeManagement__Automatic = 0,
	EItemLifetimeManagement__Manual = 1,
	EItemLifetimeManagement__EItemLifetimeManagement_MAX = 2
};


// Enum Athena.EItemRepresentation
enum class EItemRepresentation : uint8_t
{
	EItemRepresentation__None      = 0,
	EItemRepresentation__Wielded   = 1,
	EItemRepresentation__WorldProxy = 2,
	EItemRepresentation__EItemRepresentation_MAX = 3
};


// Enum Athena.EWieldableItemSize
enum class EWieldableItemSize : uint8_t
{
	EWieldableItemSize__Small      = 0,
	EWieldableItemSize__Large      = 1,
	EWieldableItemSize__EWieldableItemSize_MAX = 2
};


// Enum Athena.EWieldableItemAnimVariant
enum class EWieldableItemAnimVariant : uint8_t
{
	EWieldableItemAnimVariant__Default = 0,
	EWieldableItemAnimVariant__Variant1 = 1,
	EWieldableItemAnimVariant__Variant2 = 2,
	EWieldableItemAnimVariant__Variant3 = 3,
	EWieldableItemAnimVariant__Variant4 = 4,
	EWieldableItemAnimVariant__MAX = 5,
	EWieldableItemAnimVariant__EWieldableItemAnimVariant_MAX = 6
};


// Enum Athena.EWieldableItemBlockingAnimState
enum class EWieldableItemBlockingAnimState : uint8_t
{
	EWieldableItemBlockingAnimState__Main = 0,
	EWieldableItemBlockingAnimState__Feedback = 1,
	EWieldableItemBlockingAnimState__EWieldableItemBlockingAnimState_MAX = 2
};


// Enum Athena.EWieldableItemComplexOneShotAnimType
enum class EWieldableItemComplexOneShotAnimType : uint8_t
{
	EWieldableItemComplexOneShotAnimType__MeleeComboAttack = 0,
	EWieldableItemComplexOneShotAnimType__MeleeHeavyAttack = 1,
	EWieldableItemComplexOneShotAnimType__EWieldableItemComplexOneShotAnimType_MAX = 2
};


// Enum Athena.EWieldableItemVisibilityReason
enum class EWieldableItemVisibilityReason : uint8_t
{
	EWieldableItemVisibilityReason__Animation = 0,
	EWieldableItemVisibilityReason__Interpolation = 1,
	EWieldableItemVisibilityReason__BlocksView = 2,
	EWieldableItemVisibilityReason__EWieldableItemVisibilityReason_MAX = 3
};


// Enum Athena.EPerspectiveTypes
enum class EPerspectiveTypes : uint8_t
{
	EPerspectiveTypes__FirstPerson = 0,
	EPerspectiveTypes__ThirdPerson = 1,
	EPerspectiveTypes__EPerspectiveTypes_MAX = 2
};


// Enum Athena.ERadialInventoryType
enum class ERadialInventoryType : uint8_t
{
	ERadialInventoryType__None     = 0,
	ERadialInventoryType__Item     = 1,
	ERadialInventoryType__Map      = 2,
	ERadialInventoryType__Phrases  = 3,
	ERadialInventoryType__Emotes   = 4,
	ERadialInventoryType__ERadialInventoryType_MAX = 5
};


// Enum Athena.EPlayerStatsOperator
enum class EPlayerStatsOperator : uint8_t
{
	EPlayerStatsOperator__Sum      = 0,
	EPlayerStatsOperator__Replace  = 1,
	EPlayerStatsOperator__Minimum  = 2,
	EPlayerStatsOperator__Maximum  = 3,
	EPlayerStatsOperator__EPlayerStatsOperator_MAX = 4
};


// Enum Athena.EPlayerStatsType
enum class EPlayerStatsType : uint8_t
{
	EPlayerStatsType__Int          = 0,
	EPlayerStatsType__Double       = 1,
	EPlayerStatsType__EPlayerStatsType_MAX = 2
};


// Enum Athena.EIngestionState
enum class EIngestionState : uint8_t
{
	EIngestionState__Idle          = 0,
	EIngestionState__InToIngestion = 1,
	EIngestionState__OutOfIngestion = 2,
	EIngestionState__EIngestionState_MAX = 3
};


// Enum Athena.EEmblemUnlockCriteriaAggregationType
enum class EEmblemUnlockCriteriaAggregationType : uint8_t
{
	EEmblemUnlockCriteriaAggregationType__None = 0,
	EEmblemUnlockCriteriaAggregationType__Sum = 1,
	EEmblemUnlockCriteriaAggregationType__EEmblemUnlockCriteriaAggregationType_MAX = 2
};


// Enum Athena.EPreventDamageTypeLockReasons
enum class EPreventDamageTypeLockReasons : uint8_t
{
	EPreventDamageTypeLockReasons__IsFiredOutOfACannon = 0,
	EPreventDamageTypeLockReasons__EPreventDamageTypeLockReasons_MAX = 1
};


// Enum Athena.ESubmergedState
enum class ESubmergedState : uint8_t
{
	ESubmergedState__Surfaced      = 0,
	ESubmergedState__PartiallySubmerged = 1,
	ESubmergedState__FullySubmerged = 2,
	ESubmergedState__ESubmergedState_MAX = 3
};


// Enum Athena.EShipRegion
enum class EShipRegion : uint8_t
{
	EShipRegion__None              = 0,
	EShipRegion__TopDeck_Bow       = 1,
	EShipRegion__TopDeck_MainStairs = 2,
	EShipRegion__TopDeck_Hatch     = 3,
	EShipRegion__TopDeck_CaptainsCabin = 4,
	EShipRegion__TopDeck_WheelDeck = 5,
	EShipRegion__MapDeck_Front     = 6,
	EShipRegion__MapDeck_MainStairs = 7,
	EShipRegion__MapDeck_Table     = 8,
	EShipRegion__MapDeck_RearStairs = 9,
	EShipRegion__BrigDeck_Stairs   = 10,
	EShipRegion__BrigDeck_OutsideBrig = 11,
	EShipRegion__BrigDeck_InsideBrig = 12,
	EShipRegion__EShipRegion_MAX   = 13
};


// Enum Athena.EShipDeck
enum class EShipDeck : uint8_t
{
	EShipDeck__BottomDeck          = 0,
	EShipDeck__MidDeck             = 1,
	EShipDeck__TopDeck             = 2,
	EShipDeck__EShipDeck_MAX       = 3
};


// Enum Athena.EBaitType
enum class EBaitType : uint8_t
{
	EBaitType__NoBait              = 0,
	EBaitType__EarthWorms          = 1,
	EBaitType__Grubs               = 2,
	EBaitType__Leeches             = 3,
	EBaitType__EBaitType_MAX       = 4
};


// Enum Athena.EFishSize
enum class EFishSize : uint8_t
{
	EFishSize__Medium              = 0,
	EFishSize__Large               = 1,
	EFishSize__EFishSize_MAX       = 2
};


// Enum Athena.EFishSpawnTimeOfDay
enum class EFishSpawnTimeOfDay : uint8_t
{
	EFishSpawnTimeOfDay__AnyTime   = 0,
	EFishSpawnTimeOfDay__OnlyDay   = 1,
	EFishSpawnTimeOfDay__OnlyNight = 2,
	EFishSpawnTimeOfDay__EFishSpawnTimeOfDay_MAX = 3
};


// Enum Athena.EFishAnimationState
enum class EFishAnimationState : uint8_t
{
	EFishAnimationState__SwimmingLoop = 0,
	EFishAnimationState__Fighting  = 1,
	EFishAnimationState__Tired     = 2,
	EFishAnimationState__Escaped   = 3,
	EFishAnimationState__Caught    = 4,
	EFishAnimationState__EFishAnimationState_MAX = 5
};


// Enum Athena.EFishingFishState
enum class EFishingFishState : uint8_t
{
	EFishingFishState__NotSet      = 0,
	EFishingFishState__RisingFromTheDepths = 1,
	EFishingFishState__AttachedToFloat_MovingToFloat = 2,
	EFishingFishState__AttachedToFloat_Battling = 3,
	EFishingFishState__AttachedToFloat_Tired = 4,
	EFishingFishState__AttachedToFloat_Caught = 5,
	EFishingFishState__AttachedToFloat_Caught_Instant = 6,
	EFishingFishState__Escaping    = 7,
	EFishingFishState__EFishingFishState_MAX = 8
};


// Enum Athena.EFishingFloatState
enum class EFishingFloatState : uint8_t
{
	EFishingFloatState__NotSet     = 0,
	EFishingFloatState__AttachedToRod = 1,
	EFishingFloatState__Casting    = 2,
	EFishingFloatState__FloatingOnWater = 3,
	EFishingFloatState__BringingInCatch = 4,
	EFishingFloatState__Retracting = 5,
	EFishingFloatState__ViolentlyRetracting = 6,
	EFishingFloatState__EFishingFloatState_MAX = 7
};


// Enum Athena.EFishingMiniGamePlayerInputBattlingDirection
enum class EFishingMiniGamePlayerInputBattlingDirection : uint8_t
{
	EFishingMiniGamePlayerInputBattlingDirection__BattlingAgainstLeft = 0,
	EFishingMiniGamePlayerInputBattlingDirection__BattlingAgainstRight = 1,
	EFishingMiniGamePlayerInputBattlingDirection__BattlingAgainstAway = 2,
	EFishingMiniGamePlayerInputBattlingDirection__EFishingMiniGamePlayerInputBattlingDirection_MAX = 3
};


// Enum Athena.EFishingMiniGamePlayerInputDirection
enum class EFishingMiniGamePlayerInputDirection : uint8_t
{
	EFishingMiniGamePlayerInputDirection__None = 0,
	EFishingMiniGamePlayerInputDirection__Left = 1,
	EFishingMiniGamePlayerInputDirection__Away = 2,
	EFishingMiniGamePlayerInputDirection__Right = 3,
	EFishingMiniGamePlayerInputDirection__Towards = 4,
	EFishingMiniGamePlayerInputDirection__EFishingMiniGamePlayerInputDirection_MAX = 5
};


// Enum Athena.EFishingMiniGameEscapeDirection
enum class EFishingMiniGameEscapeDirection : uint8_t
{
	EFishingMiniGameEscapeDirection__None = 0,
	EFishingMiniGameEscapeDirection__Left = 1,
	EFishingMiniGameEscapeDirection__Away = 2,
	EFishingMiniGameEscapeDirection__Right = 3,
	EFishingMiniGameEscapeDirection__EFishingMiniGameEscapeDirection_MAX = 4
};


// Enum Athena.EFishingMiniGameState
enum class EFishingMiniGameState : uint8_t
{
	EFishingMiniGameState__Battling = 0,
	EFishingMiniGameState__Recovering = 1,
	EFishingMiniGameState__EFishingMiniGameState_MAX = 2
};


// Enum Athena.EFishingRodServerState
enum class EFishingRodServerState : uint8_t
{
	EFishingRodServerState__NotBeingUsed = 0,
	EFishingRodServerState__PreparingToCast = 1,
	EFishingRodServerState__VerifyingCastLocation = 2,
	EFishingRodServerState__Casting = 3,
	EFishingRodServerState__DelayBeforeSpawningFish = 4,
	EFishingRodServerState__RequestFishSpawnWhenPossible = 5,
	EFishingRodServerState__WaitingForFishToBite = 6,
	EFishingRodServerState__FishMovingInToBite = 7,
	EFishingRodServerState__FishOnRodAndWaitingForPlayerInput = 8,
	EFishingRodServerState__FishMovingToMinimumDistanceFromPlayer = 9,
	EFishingRodServerState__FishingMiniGameUnderway = 10,
	EFishingRodServerState__FishCaught = 11,
	EFishingRodServerState__ReelingInAComedyItem = 12,
	EFishingRodServerState__ComedyItemCaught = 13,
	EFishingRodServerState__EFishingRodServerState_MAX = 14
};


// Enum Athena.FFishingRodBattlingState
enum class EFFishingRodBattlingState : uint8_t
{
	FFishingRodBattlingState__NotBattling = 0,
	FFishingRodBattlingState__Battling_Tiring = 1,
	FFishingRodBattlingState__Battling_NotTiring = 2,
	FFishingRodBattlingState__Battling_Tired = 3,
	FFishingRodBattlingState__FFishingRodBattlingState_MAX = 4
};


// Enum Athena.EMechanismActionState
enum class EMechanismActionState : uint8_t
{
	EMechanismActionState__Active  = 0,
	EMechanismActionState__Inactive = 1,
	EMechanismActionState__EMechanismActionState_MAX = 2
};


// Enum Athena.EMechanismActionType
enum class EMechanismActionType : uint8_t
{
	EMechanismActionType__OneShot  = 0,
	EMechanismActionType__Continuous = 1,
	EMechanismActionType__EMechanismActionType_MAX = 2
};


// Enum Athena.EMechanismTriggerState
enum class EMechanismTriggerState : uint8_t
{
	EMechanismTriggerState__Active = 0,
	EMechanismTriggerState__Inactive = 1,
	EMechanismTriggerState__Disabled = 2,
	EMechanismTriggerState__EMechanismTriggerState_MAX = 3
};


// Enum Athena.EMechanismTriggerType
enum class EMechanismTriggerType : uint8_t
{
	EMechanismTriggerType__OneShot = 0,
	EMechanismTriggerType__Continuous = 1,
	EMechanismTriggerType__EMechanismTriggerType_MAX = 2
};


// Enum Athena.EMechanismActionActivationMode
enum class EMechanismActionActivationMode : uint8_t
{
	EMechanismActionActivationMode__Any = 0,
	EMechanismActionActivationMode__All = 1,
	EMechanismActionActivationMode__EMechanismActionActivationMode_MAX = 2
};


// Enum Athena.ESimpleAnimatedMechanismActionMode
enum class ESimpleAnimatedMechanismActionMode : uint8_t
{
	ESimpleAnimatedMechanismActionMode__OneShot = 0,
	ESimpleAnimatedMechanismActionMode__OneShotRetriggerable = 1,
	ESimpleAnimatedMechanismActionMode__Continuous = 2,
	ESimpleAnimatedMechanismActionMode__ESimpleAnimatedMechanismActionMode_MAX = 3
};


// Enum Athena.ESwitchMechanismTriggerRandomSelectionMode
enum class ESwitchMechanismTriggerRandomSelectionMode : uint8_t
{
	ESwitchMechanismTriggerRandomSelectionMode__Any = 0,
	ESwitchMechanismTriggerRandomSelectionMode__InactiveOnly = 1,
	ESwitchMechanismTriggerRandomSelectionMode__ESwitchMechanismTriggerRandomSelectionMode_MAX = 2
};


// Enum Athena.EQuestStatus
enum class EQuestStatus : uint8_t
{
	EQuestStatus__Pending          = 0,
	EQuestStatus__Starting         = 1,
	EQuestStatus__InProgress       = 2,
	EQuestStatus__Complete         = 3,
	EQuestStatus__EQuestStatus_MAX = 4
};


// Enum Athena.EQuestMapIcon
enum class EQuestMapIcon : uint8_t
{
	EQuestMapIcon__Unknown         = 0,
	EQuestMapIcon__XMarksTheSpot   = 1,
	EQuestMapIcon__Riddle          = 2,
	EQuestMapIcon__Bounty          = 3,
	EQuestMapIcon__Merchant        = 4,
	EQuestMapIcon__MessageInABottle = 5,
	EQuestMapIcon__CargoRun        = 6,
	EQuestMapIcon__EQuestMapIcon_MAX = 7
};


// Enum Athena.EQuestType
enum class EQuestType : uint8_t
{
	EQuestType__Unknown            = 0,
	EQuestType__XMarksTheSpot      = 1,
	EQuestType__Riddle             = 2,
	EQuestType__Bounty             = 3,
	EQuestType__Merchant           = 4,
	EQuestType__CargoRun           = 5,
	EQuestType__Tale               = 6,
	EQuestType__Matchmake          = 7,
	EQuestType__EmergantVoyage     = 8,
	EQuestType__Reward             = 9,
	EQuestType__Staging            = 10,
	EQuestType__EQuestType_MAX     = 11
};


// Enum Athena.EInputControllerType
enum class EInputControllerType : uint8_t
{
	EInputControllerType__GamePad  = 0,
	EInputControllerType__Keyboard = 1,
	EInputControllerType__EInputControllerType_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
