#include "Items/Inv_ItemTags.h"


namespace GameItems
{
	namespace Equipment
	{
		namespace Weapons
		{
			UE_DEFINE_GAMEPLAY_TAG(Axe, "GameItems.Equipment.Weapons.Axe")
			UE_DEFINE_GAMEPLAY_TAG(Sword, "GameItems.Equipment.Weapons.Sword")
		}

		namespace Cloaks
		{
			UE_DEFINE_GAMEPLAY_TAG(RedCloak, "GameItems.Equipment.Cloaks.RedCloak")
		}

		namespace Masks
		{
			UE_DEFINE_GAMEPLAY_TAG(SteelMask, "GameItems.Equipment.Masks.SteelMask")
		}
	}
	namespace Consumables
	{
		namespace Potions
		{
			namespace Red
			{
				UE_DEFINE_GAMEPLAY_TAG(SmallPotion, "GameItems.Consumables.Potions.Red.SmallPotion")
				UE_DEFINE_GAMEPLAY_TAG(LargePotion,  "GameItems.Consumables.Potions.Red.LargePotion")
			}

			namespace Blue
			{
				UE_DEFINE_GAMEPLAY_TAG(SmallPotion, "GameItems.Consumables.Potions.Blue.SmallPotion")
				UE_DEFINE_GAMEPLAY_TAG(LargePotion,  "GameItems.Consumables.Potions.Blue.LargePotion")
			}
		}
	}

	namespace Craftables
	{
		UE_DEFINE_GAMEPLAY_TAG(FireFernFruit, "GameItems.Craftables.FireFernFruit")
		UE_DEFINE_GAMEPLAY_TAG(LuminDaisy, "GameItems.Craftables.LuminDaisy")
		UE_DEFINE_GAMEPLAY_TAG(ScorchPetalBlossom, "GameItems.Craftables.ScorchPetalBlossom")
	}
}

