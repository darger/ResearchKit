/*
* This header is generated by classdump-dyld 0.7
* on Monday, March 9, 2015 at 8:56:13 PM Greenwich Mean Time
* Operating System: Version 8.1 (Build 12B411)
* Image Source: /private/var/mobile/Containers/Bundle/Application/59532D3A-E75D-48D6-95BE-6EFEA922624C/Parkinson.app/Frameworks/ResearchKit.framework/ResearchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ResearchKit/ORKAnswerFormat.h>

@class ORKAnswerFormat, HKUnit, HKQuantityType;

@interface ORKHealthKitQuantityTypeAnswerFormat : ORKAnswerFormat {

	ORKAnswerFormat* _impliedAnswerFormat;
	HKUnit* _userUnit;
	HKQuantityType* _quantityType;
	HKUnit* _unit;
	long long _numericAnswerStyle;

}

@property (nonatomic,copy,readonly) HKQuantityType * quantityType;              //@synthesize quantityType=_quantityType - In the implementation block
@property (nonatomic,readonly) HKUnit * unit;                                   //@synthesize unit=_unit - In the implementation block
@property (nonatomic,readonly) long long numericAnswerStyle;                    //@synthesize numericAnswerStyle=_numericAnswerStyle - In the implementation block
+(id)answerFormatWithQuantityType:(id)arg1 unit:(id)arg2 style:(long long)arg3 ;
-(id)dictionaryValue;
-(id)_impliedAnswerFormat;
-(BOOL)_isHealthKitAnswerFormat;
-(id)_healthKitObjectType;
-(id)initWithQuantityType:(id)arg1 unit:(id)arg2 style:(long long)arg3 ;
-(long long)numericAnswerStyle;
-(id)_healthKitUserUnit;
-(id)_healthKitUnit;
-(void)_setHealthKitUserUnit:(id)arg1 ;
-(HKQuantityType *)quantityType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(HKUnit *)unit;
@end

