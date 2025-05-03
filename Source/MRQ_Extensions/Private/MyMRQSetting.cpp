// Fill out your copyright notice in the Description page of Project Settings.

#include "MyMRQSetting.h"
#include "Logging/StructuredLog.h"

void UMyMRQSetting::SetupForPipelineImpl(UMoviePipeline* InPipeline)
{
	Super::SetupForPipelineImpl(InPipeline);

	UE_LOGFMT(LogTemp, Log, "UMyMRQSetting::SetupForPipelineImpl called");
}

void UMyMRQSetting::TeardownForPipelineImpl(UMoviePipeline* InPipeline)
{
	Super::TeardownForPipelineImpl(InPipeline);
	UE_LOGFMT(LogTemp, Log, "UMyMRQSetting::TeardownForPipelineImpl called");
}
