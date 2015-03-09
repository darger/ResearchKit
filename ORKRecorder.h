/*
* This header is generated by classdump-dyld 0.7
* on Monday, March 9, 2015 at 8:56:14 PM Greenwich Mean Time
* Operating System: Version 8.1 (Build 12B411)
* Image Source: /private/var/mobile/Containers/Bundle/Application/59532D3A-E75D-48D6-95BE-6EFEA922624C/Parkinson.app/Frameworks/ResearchKit.framework/ResearchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ORKRecorderDelegate;
@class NSUUID, ORKStep, NSURL, NSDate;

@interface ORKRecorder : NSObject {

	unsigned long long _backgroundTask;
	NSUUID* _recorderUUID;
	BOOL _recording;
	BOOL _continuesInBackground;
	id<ORKRecorderDelegate> _delegate;
	ORKStep* _step;
	NSURL* _outputDirectory;
	NSDate* _startDate;

}

@property (assign,nonatomic,__weak) id<ORKRecorderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) ORKStep * step;                                       //@synthesize step=_step - In the implementation block
@property (nonatomic,copy,readonly) NSURL * outputDirectory;                       //@synthesize outputDirectory=_outputDirectory - In the implementation block
@property (getter=isRecording,nonatomic,readonly) BOOL recording;                  //@synthesize recording=_recording - In the implementation block
@property (assign,nonatomic) BOOL continuesInBackground;                           //@synthesize continuesInBackground=_continuesInBackground - In the implementation block
@property (nonatomic,copy) NSDate * startDate;                                     //@synthesize startDate=_startDate - In the implementation block
-(id)initWithStep:(id)arg1 outputDirectory:(id)arg2 ;
-(void)setContinuesInBackground:(BOOL)arg1 ;
-(id)_makeJSONDataLoggerWithError:(id*)arg1 ;
-(void)finishRecordingWithError:(id)arg1 ;
-(void)_reportFileResultWithFile:(id)arg1 error:(id)arg2 ;
-(id)_recorderType;
-(void)viewController:(id)arg1 willStartStepWithView:(id)arg2 ;
-(NSURL *)outputDirectory;
-(BOOL)continuesInBackground;
-(id)_recordingDirectoryURL;
-(id)_userInfo;
-(void)_applyFileProtection:(long long)arg1 toFileAtURL:(id)arg2 ;
-(BOOL)isRecording;
-(void)setDelegate:(id<ORKRecorderDelegate>)arg1 ;
-(id)init;
-(id<ORKRecorderDelegate>)delegate;
-(id)_init;
-(void)start;
-(id)mimeType;
-(void)_reset;
-(void)stop;
-(id)logName;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(ORKStep *)step;
-(void)setStep:(ORKStep *)arg1 ;
@end

