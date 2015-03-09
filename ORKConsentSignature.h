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

@class NSString, UIImage;

@interface ORKConsentSignature : NSObject <NSSecureCoding, NSCopying> {

	BOOL _requiresName;
	BOOL _requiresSignatureImage;
	NSString* _identifier;
	NSString* _title;
	NSString* _firstName;
	NSString* _lastName;
	UIImage* _signatureImage;
	NSString* _signatureDate;
	NSString* _signatureDateFormatString;

}

@property (assign,nonatomic) BOOL requiresName;                               //@synthesize requiresName=_requiresName - In the implementation block
@property (assign,nonatomic) BOOL requiresSignatureImage;                     //@synthesize requiresSignatureImage=_requiresSignatureImage - In the implementation block
@property (nonatomic,copy) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * firstName;                              //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                               //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy) UIImage * signatureImage;                          //@synthesize signatureImage=_signatureImage - In the implementation block
@property (nonatomic,copy) NSString * signatureDate;                          //@synthesize signatureDate=_signatureDate - In the implementation block
@property (nonatomic,copy) NSString * signatureDateFormatString;              //@synthesize signatureDateFormatString=_signatureDateFormatString - In the implementation block
+(id)signatureForPersonWithTitle:(id)arg1 dateFormatString:(id)arg2 identifier:(id)arg3 firstName:(id)arg4 lastName:(id)arg5 signatureImage:(id)arg6 dateString:(id)arg7 ;
+(id)signatureForPersonWithTitle:(id)arg1 dateFormatString:(id)arg2 identifier:(id)arg3 ;
+(BOOL)supportsSecureCoding;
-(id)dictionaryValue;
-(UIImage *)signatureImage;
-(void)setSignatureImage:(UIImage *)arg1 ;
-(void)setSignatureDate:(NSString *)arg1 ;
-(void)setSignatureDateFormatString:(NSString *)arg1 ;
-(NSString *)signatureDate;
-(NSString *)signatureDateFormatString;
-(BOOL)requiresName;
-(BOOL)requiresSignatureImage;
-(void)setRequiresName:(BOOL)arg1 ;
-(void)setRequiresSignatureImage:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
@end

