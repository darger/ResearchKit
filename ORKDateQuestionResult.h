/*
* This header is generated by classdump-dyld 0.7
* on Monday, March 9, 2015 at 8:56:14 PM Greenwich Mean Time
* Operating System: Version 8.1 (Build 12B411)
* Image Source: /private/var/mobile/Containers/Bundle/Application/59532D3A-E75D-48D6-95BE-6EFEA922624C/Parkinson.app/Frameworks/ResearchKit.framework/ResearchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ResearchKit/ResearchKit-Structs.h>
#import <ResearchKit/ORKQuestionResult.h>

@class NSDate, NSCalendar, NSTimeZone;

@interface ORKDateQuestionResult : ORKQuestionResult {

	NSDate* _dateAnswer;
	NSCalendar* _calendar;
	NSTimeZone* _timeZone;

}

@property (nonatomic,copy) NSDate * dateAnswer;                //@synthesize dateAnswer=_dateAnswer - In the implementation block
@property (nonatomic,copy) NSCalendar * calendar;              //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,copy) NSTimeZone * timeZone;              //@synthesize timeZone=_timeZone - In the implementation block
+(Class)answerClass;
-(NSDate *)dateAnswer;
-(id)_serializableDictionary;
-(void)setDateAnswer:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSTimeZone *)timeZone;
-(NSCalendar *)calendar;
-(id)answer;
-(void)setAnswer:(id)arg1 ;
@end

