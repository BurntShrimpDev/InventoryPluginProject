// Copyright Burnt Shrimp.


#include "InventoryManagement/Utils/Inv_InventoryStatics.h"

#include "InventoryManagement/Components/Inv_InventoryComponent.h"

UInv_InventoryComponent* UInv_InventoryStatics::GetInventoryComponent(const APlayerController* PlayerController)
{
	if (!IsValid(PlayerController)) return nullptr;

	UInv_InventoryComponent* InventoryComponent = PlayerController->FindComponentByClass<UInv_InventoryComponent>();
	return InventoryComponent;
}
