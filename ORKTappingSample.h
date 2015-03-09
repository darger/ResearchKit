/*
* This header is generated by classdump-dyld 0.7
* on Monday, March 9, 2015 at 8:56:14 PM Greenwich Mean Time
* Operating System: Version 8.1 (Build 12B411)
* Image Source: /private/var/mobile/Containers/Bundle/Application/59532D3A-E75D-48D6-95BE-6EFEA922624C/Parkinson.app/Frameworks/ResearchKit.framework/ResearchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ResearchKit/ResearchKit-Structs.h>
#import <ResearchKit/NSCopying.h>
#import <ResearchKit/NSSecureCoding.h>

@interface ORKTappingSample : NSObject <NSCopying, NSSecureCoding> {

	double _timestamp;
	long long _buttonIdentifier;
	CGPoint _location;

}

@property (assign,nonatomic) double timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) long long buttonIdentifier;              //@synthesize buttonIdentifier=_buttonIdentifier - In the implementation block
@property (assign,nonatomic) CGPoint location;                        //@synthesize location=_location - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setButtonIdentifier:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)location;
-(long long)buttonIdentifier;
-(void)setLocation:(CGPoint)arg1 ;
@end

