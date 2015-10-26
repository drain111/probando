// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProject.h"
#include "TutorialPathFollowingComponent.h"
#include "UNavArea_Jump.h"

void UTutorialPathFollowingComponent::SetMoveSegment(int32 SegmentStartIndex)
{
	Super::SetMoveSegment(SegmentStartIndex);

	if (CharacterMoveComp != NULL)
	{
		const FNavPathPoint& SegmentStart = Path->GetPathPoints()[MoveSegmentStartIndex];
		
		UE_LOG(LogTemp, Log, TEXT("Hola"))

		if (FNavAreaHelper::HasJumpFlag(SegmentStart))
		{
			// jump! well... fly-in-straight-line!
			CharacterMoveComp->SetMovementMode(MOVE_Flying);

		}
		else
		{
			// regular move
			CharacterMoveComp->SetMovementMode(MOVE_Walking);


		}
	}
}

void UTutorialPathFollowingComponent::SetMovementComponent(UNavMovementComponent* MoveComp)
{
	Super::SetMovementComponent(MoveComp);

	CharacterMoveComp = Cast<UCharacterMovementComponent>(MovementComp);
}



