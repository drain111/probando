// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProject.h"
#include "ATutorialAIController.h"
#include "TutorialPathFollowingComponent.h"

AATutorialAIController::AATutorialAIController(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UTutorialPathFollowingComponent>(TEXT("PathFollowingComponent")))
{

}



