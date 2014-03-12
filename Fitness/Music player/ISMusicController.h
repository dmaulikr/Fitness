//
//  ISMusicController.h
//  RNFrostedSidebar
//
//  Created by ispluser on 3/11/14.
//  Copyright (c) 2014 Ryan Nystrom. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MediaPlayer/MediaPlayer.h>
#import <AVFoundation/AVFoundation.h>
#import <AudioToolbox/AudioToolbox.h>
#import "MusicTableViewController.h"


@interface ISMusicController : NSObject <MPMediaPickerControllerDelegate, MusicTableViewControllerDelegate, AVAudioPlayerDelegate>
{
	
	BOOL						playedMusicOnce;
	AVAudioPlayer				*appSoundPlayer;
    BOOL						interruptedOnPlayback;
	BOOL						playing ;
	MPMusicPlayerController		*musicPlayer;
	MPMediaItemCollection		*userMediaItemCollection;
	UIImage						*noArtworkImage;
	
}

@property id delegate;

@property (readwrite)			BOOL					playedMusicOnce;
@property (nonatomic, strong)	MPMediaItemCollection	*userMediaItemCollection;
@property (nonatomic, strong)	MPMusicPlayerController	*musicPlayer;
@property (nonatomic, strong)	UIImage					*noArtworkImage;
@property (nonatomic, strong)	AVAudioPlayer			*appSoundPlayer;
@property (nonatomic, strong)	AVQueuePlayer			*appQueuePlayer;
@property (readwrite)			BOOL					interruptedOnPlayback;
@property (readwrite)			BOOL					playing;


//----------------voice assistance-------------

-(void)speakText:(NSString *)text;
-(void)stopTalking;
-(void)setPitch:(float)pitch variance:(float)variance speed:(float)speed;

- (IBAction)prevSong:(id)sender;
- (IBAction)nextSong:(id)sender;
- (void) initialize;
- (IBAction)	playOrPauseMusic:		(id) sender;
- (IBAction)	AddMusicOrShowMusic:	(id) sender;
- (IBAction)	playAppSound:			(id) sender;

- (BOOL) useiPodPlayer;


@end
