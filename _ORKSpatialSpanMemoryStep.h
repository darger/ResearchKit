/*
* This header is generated by classdump-dyld 0.7
* on Monday, March 9, 2015 at 8:56:14 PM Greenwich Mean Time
* Operating System: Version 8.1 (Build 12B411)
* Image Source: /private/var/mobile/Containers/Bundle/Application/59532D3A-E75D-48D6-95BE-6EFEA922624C/Parkinson.app/Frameworks/ResearchKit.framework/ResearchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ResearchKit/ResearchKit-Structs.h>
#import <ResearchKit/ORKActiveStep.h>

@class UIImage, NSString;

@interface _ORKSpatialSpanMemoryStep : ORKActiveStep {

	BOOL _requireReversal;
	long long _initialSpan;
	long long _minimumSpan;
	long long _maximumSpan;
	double _playSpeed;
	long long _maxTests;
	long long _maxConsecutiveFailures;
	UIImage* _customTargetImage;
	NSString* _customTargetPluralName;

}

@property (assign,nonatomic) long long initialSpan;                         //@synthesize initialSpan=_initialSpan - In the implementation block
@property (assign,nonatomic) long long minimumSpan;                         //@synthesize minimumSpan=_minimumSpan - In the implementation block
@property (assign,nonatomic) long long maximumSpan;                         //@synthesize maximumSpan=_maximumSpan - In the implementation block
@property (assign,nonatomic) double playSpeed;                              //@synthesize playSpeed=_playSpeed - In the implementation block
@property (assign,nonatomic) long long maxTests;                            //@synthesize maxTests=_maxTests - In the implementation block
@property (assign,nonatomic) long long maxConsecutiveFailures;              //@synthesize maxConsecutiveFailures=_maxConsecutiveFailures - In the implementation block
@property (assign,nonatomic) BOOL requireReversal;                          //@synthesize requireReversal=_requireReversal - In the implementation block
@property (nonatomic,retain) UIImage * customTargetImage;                   //@synthesize customTargetImage=_customTargetImage - In the implementation block
@property (nonatomic,copy) NSString * customTargetPluralName;               //@synthesize customTargetPluralName=_customTargetPluralName - In the implementation block
+(Class)_stepViewControllerClass;
-(id)dictionaryValue;
-(void)validateParameters;
-(long long)initialSpan;
-(UIImage *)customTargetImage;
-(void)setCustomTargetImage:(UIImage *)arg1 ;
-(BOOL)requireReversal;
-(double)playSpeed;
-(NSString *)customTargetPluralName;
-(long long)maximumSpan;
-(long long)minimumSpan;
-(long long)maxTests;
-(long long)maxConsecutiveFailures;
-(BOOL)_shouldAllowBackNavigation;
-(BOOL)startsFinished;
-(void)setInitialSpan:(long long)arg1 ;
-(void)setMinimumSpan:(long long)arg1 ;
-(void)setMaximumSpan:(long long)arg1 ;
-(void)setPlaySpeed:(double)arg1 ;
-(void)setMaxTests:(long long)arg1 ;
-(void)setMaxConsecutiveFailures:(long long)arg1 ;
-(void)setRequireReversal:(BOOL)arg1 ;
-(void)setCustomTargetPluralName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
@end
