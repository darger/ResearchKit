/*
* This header is generated by classdump-dyld 0.7
* on Monday, March 9, 2015 at 8:56:14 PM Greenwich Mean Time
* Operating System: Version 8.1 (Build 12B411)
* Image Source: /private/var/mobile/Containers/Bundle/Application/59532D3A-E75D-48D6-95BE-6EFEA922624C/Parkinson.app/Frameworks/ResearchKit.framework/ResearchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ResearchKit/ORKRecorderConfiguration.h>
#import <ResearchKit/ORKSerialization.h>

@class NSString;

@interface ORKPedometerRecorderConfiguration : ORKRecorderConfiguration <ORKSerialization>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)recorderForStep:(id)arg1 outputDirectory:(id)arg2 ;
-(long long)requestedPermissionMask;
-(id)initWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
@end

