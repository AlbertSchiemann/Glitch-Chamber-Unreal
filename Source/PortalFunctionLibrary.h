// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PortalFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class V03_API UPortalFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category = "PortalFunctionLibrary")
		static void ResizeRenderTarget(UTextureRenderTarget2D* render_target, float size_x, float size_y);
};
