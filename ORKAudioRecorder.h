/*
* This header is generated by classdump-dyld 0.7
* on Monday, March 9, 2015 at 8:56:14 PM Greenwich Mean Time
* Operating System: Version 8.1 (Build 12B411)
* Image Source: /private/var/mobile/Containers/Bundle/Application/59532D3A-E75D-48D6-95BE-6EFEA922624C/Parkinson.app/Frameworks/ResearchKit.framework/ResearchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ResearchKit/ORKRecorder.h>

@class NSDictionary, AVAudioRecorder;

@interface ORKAudioRecorder : ORKRecorder {

	NSDictionary* _recorderSettings;
	AVAudioRecorder* _audioRecorder;

}

@property (nonatomic,copy) NSDictionary * recorderSettings;                //@synthesize recorderSettings=_recorderSettings - In the implementation block
@property (nonatomic,retain) AVAudioRecorder * audioRecorder;              //@synthesize audioRecorder=_audioRecorder - In the implementation block
+(id)defaultRecorderSettings;
-(void)finishRecordingWithError:(id)arg1 ;
-(void)_doStopRecording;
-(id)_recorderType;
-(AVAudioRecorder *)audioRecorder;
-(void)setRecorderSettings:(NSDictionary *)arg1 ;
-(id)_recordingFileURL;
-(BOOL)_recreateFileWithError:(id*)arg1 ;
-(NSDictionary *)recorderSettings;
-(id)initWithRecorderSettings:(id)arg1 step:(id)arg2 outputDirectory:(id)arg3 ;
-(void)setAudioRecorder:(AVAudioRecorder *)arg1 ;
-(BOOL)isRecording;
-(void)dealloc;
-(id)_extension;
-(void)start;
-(id)mimeType;
-(void)_reset;
-(void)stop;
@end

