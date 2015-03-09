/*
* This header is generated by classdump-dyld 0.7
* on Monday, March 9, 2015 at 8:56:12 PM Greenwich Mean Time
* Operating System: Version 8.1 (Build 12B411)
* Image Source: /private/var/mobile/Containers/Bundle/Application/59532D3A-E75D-48D6-95BE-6EFEA922624C/Parkinson.app/Frameworks/ResearchKit.framework/ResearchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface _ORKSpatialSpanGame : NSObject {

	long long* _sequence;
	unsigned _seed;
	long long _gameSize;
	long long _sequenceLength;

}

@property (nonatomic,readonly) long long gameSize;                    //@synthesize gameSize=_gameSize - In the implementation block
@property (nonatomic,readonly) long long sequenceLength;              //@synthesize sequenceLength=_sequenceLength - In the implementation block
@property (nonatomic,readonly) unsigned seed;                         //@synthesize seed=_seed - In the implementation block
-(void)_generateSequence;
-(id)initWithGameSize:(long long)arg1 sequenceLength:(long long)arg2 seed:(unsigned)arg3 ;
-(void)enumerateSequenceWithHandler:(/*^block*/id)arg1 ;
-(long long)tileIndexForStep:(long long)arg1 ;
-(long long)gameSize;
-(long long)sequenceLength;
-(void)dealloc;
-(unsigned)seed;
@end
