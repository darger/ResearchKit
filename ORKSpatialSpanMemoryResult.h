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

@interface ORKSpatialSpanMemoryResult : ORKResult {

	long long _score;
	long long _numberOfGames;
	long long _numberOfFailures;
	NSArray* _gameRecords;

}

@property (assign,nonatomic) long long score;                         //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) long long numberOfGames;                 //@synthesize numberOfGames=_numberOfGames - In the implementation block
@property (assign,nonatomic) long long numberOfFailures;              //@synthesize numberOfFailures=_numberOfFailures - In the implementation block
@property (nonatomic,copy) NSArray * gameRecords;                     //@synthesize gameRecords=_gameRecords - In the implementation block
-(void)setNumberOfFailures:(long long)arg1 ;
-(void)setGameRecords:(NSArray *)arg1 ;
-(long long)numberOfFailures;
-(NSArray *)gameRecords;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)numberOfGames;
-(void)setNumberOfGames:(long long)arg1 ;
-(long long)score;
-(void)setScore:(long long)arg1 ;
@end

