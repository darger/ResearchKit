/*
* This header is generated by classdump-dyld 0.7
* on Monday, March 9, 2015 at 8:56:13 PM Greenwich Mean Time
* Operating System: Version 8.1 (Build 12B411)
* Image Source: /private/var/mobile/Containers/Bundle/Application/59532D3A-E75D-48D6-95BE-6EFEA922624C/Parkinson.app/Frameworks/ResearchKit.framework/ResearchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ResearchKit/ResearchKit-Structs.h>
#import <ResearchKit/NSSecureCoding.h>
#import <ResearchKit/NSCopying.h>

@class NSString, UIImage, NSURL;

@interface ORKConsentSection : NSObject <NSSecureCoding, NSCopying> {

	NSString* _escapedContent;
	long long _type;
	NSString* _title;
	NSString* _formalTitle;
	NSString* _summary;
	NSString* _content;
	NSString* _htmlContent;
	UIImage* _customImage;
	NSString* _customLearnMoreButtonTitle;
	NSURL* _customAnimationURL;

}

@property (nonatomic,readonly) long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * formalTitle;                             //@synthesize formalTitle=_formalTitle - In the implementation block
@property (nonatomic,copy) NSString * summary;                                 //@synthesize summary=_summary - In the implementation block
@property (nonatomic,copy) NSString * content;                                 //@synthesize content=_content - In the implementation block
@property (nonatomic,copy) NSString * htmlContent;                             //@synthesize htmlContent=_htmlContent - In the implementation block
@property (nonatomic,copy) UIImage * customImage;                              //@synthesize customImage=_customImage - In the implementation block
@property (nonatomic,copy) NSString * customLearnMoreButtonTitle;              //@synthesize customLearnMoreButtonTitle=_customLearnMoreButtonTitle - In the implementation block
@property (nonatomic,copy) NSURL * customAnimationURL;                         //@synthesize customAnimationURL=_customAnimationURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)dictionaryValue;
-(NSURL *)customAnimationURL;
-(NSString *)formalTitle;
-(NSString *)customLearnMoreButtonTitle;
-(void)setFormalTitle:(NSString *)arg1 ;
-(void)setHtmlContent:(NSString *)arg1 ;
-(void)setCustomAnimationURL:(NSURL *)arg1 ;
-(void)setCustomLearnMoreButtonTitle:(NSString *)arg1 ;
-(id)escapedContent;
-(void)setCustomImage:(UIImage *)arg1 ;
-(UIImage *)customImage;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(long long)type;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(NSString *)content;
-(NSString *)htmlContent;
-(void)setContent:(NSString *)arg1 ;
-(NSString *)summary;
-(void)setSummary:(NSString *)arg1 ;
@end
