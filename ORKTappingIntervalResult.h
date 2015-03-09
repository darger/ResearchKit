/*
* This header is generated by classdump-dyld 0.7
* on Monday, March 9, 2015 at 8:56:14 PM Greenwich Mean Time
* Operating System: Version 8.1 (Build 12B411)
* Image Source: /private/var/mobile/Containers/Bundle/Application/59532D3A-E75D-48D6-95BE-6EFEA922624C/Parkinson.app/Frameworks/ResearchKit.framework/ResearchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ResearchKit/ResearchKit-Structs.h>
#import <ResearchKit/ORKResult.h>

@class NSArray;

@interface ORKTappingIntervalResult : ORKResult {

	NSArray* _samples;
	CGSize _stepViewSize;
	CGRect _buttonRect1;
	CGRect _buttonRect2;

}

@property (nonatomic,copy) NSArray * samples;                  //@synthesize samples=_samples - In the implementation block
@property (assign,nonatomic) CGSize stepViewSize;              //@synthesize stepViewSize=_stepViewSize - In the implementation block
@property (assign,nonatomic) CGRect buttonRect1;               //@synthesize buttonRect1=_buttonRect1 - In the implementation block
@property (assign,nonatomic) CGRect buttonRect2;               //@synthesize buttonRect2=_buttonRect2 - In the implementation block
-(CGRect)buttonRect1;
-(CGRect)buttonRect2;
-(CGSize)stepViewSize;
-(void)setButtonRect1:(CGRect)arg1 ;
-(void)setButtonRect2:(CGRect)arg1 ;
-(void)setStepViewSize:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)samples;
-(void)setSamples:(NSArray *)arg1 ;
@end

