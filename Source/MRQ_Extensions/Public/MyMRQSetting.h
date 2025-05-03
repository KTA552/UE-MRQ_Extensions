// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MoviePipelineSetting.h"
#include "MyMRQSetting.generated.h"
	
UCLASS(Blueprintable)
class MRQ_EXTENSIONS_API UMyMRQSetting : public UMoviePipelineSetting
{
	GENERATED_BODY()
public:
	// Rendering開始時に呼ばれる
	virtual void SetupForPipelineImpl(UMoviePipeline* InPipeline) override;
	// Rendering終了時に呼ばれる
	virtual void TeardownForPipelineImpl(UMoviePipeline* InPipeline) override;

	// 継承してどちらかはtrueにしなければならない
	virtual bool IsValidOnShots() const override { return false; }
	virtual bool IsValidOnPrimary() const override { return true; }
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsParam;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ParamValue;
};
