// Fill out your copyright notice in the Description page of Project Settings.

#include "Paddle_Player_Controller.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraActor.h"

#include "Paddle.h"
#include "Ball.h"

APaddle_Player_Controller::APaddle_Player_Controller()
{
}

void APaddle_Player_Controller::SetupInputComponent()
{
	Super::SetupInputComponent();
	EnableInput(this);

	InputComponent->BindAxis("MoveHorizontal", this, &APaddle_Player_Controller::MoveHorizontal);
	InputComponent->BindAction("Launch", IE_Pressed, this, &APaddle_Player_Controller::Launch);

	InputComponent->BindAxis("MoveVertically", this, &APaddle_Player_Controller::MoveVertically);
}

void APaddle_Player_Controller::BeginPlay()
{
	TArray<AActor*> CameraActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACameraActor::StaticClass(), CameraActors);

	FViewTargetTransitionParams Params;
	SetViewTarget(CameraActors[0], Params);

	SpawnNewBall();
}

void APaddle_Player_Controller::MoveHorizontal(float AxisValue)
{
	auto MyPawn = Cast<APaddle>(GetPawn());
	if (MyPawn) {
		MyPawn->MoveHorizontal(AxisValue);
	};
}

void APaddle_Player_Controller::MoveVertically(float AxisValue)
{

	auto MyPawn = Cast<APaddle>(GetPawn());
	if (MyPawn) {

		MyPawn->MoveVertically(AxisValue);

	};
}

void APaddle_Player_Controller::Launch()
{
	MyBall->Launch();
}

void APaddle_Player_Controller::SpawnNewBall()
{
	if (!MyBall)
		MyBall = nullptr;

	if (BallObj) {
		MyBall = GetWorld()->SpawnActor<ABall>(BallObj, SpawnLocation, SpawnRotation, SpawnInfo);
	}
}

