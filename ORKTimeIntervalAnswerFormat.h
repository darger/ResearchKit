/*
* This header is generated by classdump-dyld 0.7
* on Monday, March 9, 2015 at 8:56:15 PM Greenwich Mean Time
* Operating System: Version 8.1 (Build 12B411)
* Image Source: /private/var/mobile/Containers/Bundle/Application/59532D3A-E75D-48D6-95BE-6EFEA922624C/Parkinson.app/Frameworks/ResearchKit.framework/ResearchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ResearchKit/ORKAnswerFormat.h>

@interface ORKTimeIntervalAnswerFormat : ORKAnswerFormat {

	double _defaultInterval;
	long long _step;

}

@property (readonly) double defaultInterval;              //@synthesize defaultInterval=_defaultInterval - In the implementation block
@property (readonly) long long step;                      //@synthesize step=_step - In the implementation block
+(Class)_questionResultClass;
-(id)dictionaryValue;
-(void)validateParameters;
-(long long)questionType;
-(double)_pickerDefaultDuration;
-(double)defaultInterval;
-(id)initWithDefaultInterval:(double)arg1 step:(long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(long long)step;
@end

