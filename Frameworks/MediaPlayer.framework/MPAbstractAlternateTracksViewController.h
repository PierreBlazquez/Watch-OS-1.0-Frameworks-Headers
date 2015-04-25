//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPViewController.h>

@interface MPAbstractAlternateTracksViewController : MPViewController
{
    unsigned int _selectedTracks[2];
    unsigned int _previousTracks[2];
}

- (id)init;
- (void)reloadData;
- (void)dealloc;
- (BOOL)_hasSubtitlesGroup;
- (BOOL)_hasAudioGroup;
- (void)_alternateTypesChangedNotification:(id)arg1;
- (void)removeLoadingUI;
- (void)addLoadingUI;
- (unsigned int)typeForGroup:(int)arg1;
- (unsigned int)indexForGroup:(int)arg1;
- (id)arrayForGroup:(int)arg1;
- (unsigned int)countOfGroups;
- (void)saveChanges;
- (id)alternateTracks;

@end

