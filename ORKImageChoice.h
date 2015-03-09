/*
* This header is generated by classdump-dyld 0.7
* on Monday, March 9, 2015 at 8:56:15 PM Greenwich Mean Time
* Operating System: Version 8.1 (Build 12B411)
* Image Source: /private/var/mobile/Containers/Bundle/Application/59532D3A-E75D-48D6-95BE-6EFEA922624C/Parkinson.app/Frameworks/ResearchKit.framework/ResearchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ResearchKit/ResearchKit-Structs.h>
#import <ResearchKit/ORKAnswerOption.h>
#import <ResearchKit/NSSecureCoding.h>
#import <ResearchKit/NSCopying.h>

@protocol NSCopyingNSCodingNSObject;
@class NSString, UIImage;

@interface ORKImageChoice : NSObject <ORKAnswerOption, NSSecureCoding, NSCopying> {

	NSString* _text;
	id<NSCopying><NSCoding><NSObject> _value;
	UIImage* _normalStateImage;
	UIImage* _selectedStateImage;

}

@property (readonly) UIImage * normalStateImage;                                //@synthesize normalStateImage=_normalStateImage - In the implementation block
@property (readonly) UIImage * selectedStateImage;                              //@synthesize selectedStateImage=_selectedStateImage - In the implementation block
@property (copy,readonly) NSString * text; 
@property (copy,readonly) id<NSCopying><NSCoding><NSObject> value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)choiceWithNormalImage:(id)arg1 selectedImage:(id)arg2 text:(id)arg3 value:(id)arg4 ;
+(BOOL)supportsSecureCoding;
-(id)dictionaryValue;
-(id)initWithNormalImage:(id)arg1 selectedImage:(id)arg2 text:(id)arg3 value:(id)arg4 ;
-(UIImage *)normalStateImage;
-(UIImage *)selectedStateImage;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(id<NSCopying><NSCoding><NSObject>)value;
@end

