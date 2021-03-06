/*
* This header is generated by classdump-dyld 0.7
* on Monday, March 9, 2015 at 8:56:12 PM Greenwich Mean Time
* Operating System: Version 8.1 (Build 12B411)
* Image Source: /private/var/mobile/Containers/Bundle/Application/59532D3A-E75D-48D6-95BE-6EFEA922624C/Parkinson.app/Frameworks/ResearchKit.framework/ResearchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ResearchKit/ResearchKit-Structs.h>
#import <ResearchKit/ORKSerialization.h>
#import <ResearchKit/NSSecureCoding.h>
#import <ResearchKit/NSCopying.h>

@class NSString, ORKAnswerFormat, ORKFormStep;

@interface ORKFormItem : NSObject <ORKSerialization, NSSecureCoding, NSCopying> {

	NSString* _identifier;
	NSString* _text;
	NSString* _placeholder;
	ORKAnswerFormat* _answerFormat;
	ORKFormStep* _step;

}

@property (nonatomic,copy,readonly) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                             //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                               //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,copy,readonly) ORKAnswerFormat * answerFormat;              //@synthesize answerFormat=_answerFormat - In the implementation block
@property (assign,nonatomic,__weak) ORKFormStep * step;                          //@synthesize step=_step - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)dictionaryValue;
-(ORKAnswerFormat *)answerFormat;
-(id)_impliedAnswerFormat;
-(long long)questionType;
-(id)initWithIdentifier:(id)arg1 text:(id)arg2 answerFormat:(id)arg3 ;
-(id)initWithSectionTitle:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(void)setPlaceholder:(NSString *)arg1 ;
-(NSString *)placeholder;
-(ORKFormStep *)step;
-(void)setStep:(ORKFormStep *)arg1 ;
@end

