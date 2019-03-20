#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ShipDamage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ShipDamage.DamageablePartsInterface
// 0x0000 (0x0028 - 0x0028)
class UDamageablePartsInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ShipDamage.DamageablePartsInterface"));
		return ptr;
	}


	void UnregisterDamageablePart(class AActor* DamageableActor);
	void RegisterDamageablePart(class AActor* DamageableActor);
	TArray<class AActor*> GetDamageableParts();
};


// Class ShipDamage.HullDamageInterface
// 0x0000 (0x0028 - 0x0028)
class UHullDamageInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ShipDamage.HullDamageInterface"));
		return ptr;
	}

};


// Class ShipDamage.TargetPointInterface
// 0x0000 (0x0028 - 0x0028)
class UTargetPointInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ShipDamage.TargetPointInterface"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
