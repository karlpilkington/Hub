//
//  songList.h
//  MPpleD
//
//  Created by Kyle Hershey on 2/22/13.
//  Copyright (c) 2013 Kyle Hershey. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <mpd/status.h>
#import <mpd/client.h>
#import "mpdConnectionData.h"

@interface songList : NSObject

//Server Settings
@property struct mpd_connection *conn;
@property const char* host;
@property int port;

//data
@property NSMutableArray *songs;
@property NSMutableArray *albums;

//Methods
-(id)initWithBusqueda:(NSString *)busqueda;
-(id)initWithArtist:(NSString *)artist;
-(id)initWithAlbum:(NSString *)album;
-(NSString*)songAtIndex:(NSUInteger)row;
-(NSString*)albumAtIndex:(NSUInteger)row;
-(NSString*)songAtSectionAndIndex:(NSUInteger)section row:(NSUInteger)row;
-(NSUInteger)songCount;
-(void)addSongAtIndexToQueue:(NSUInteger)row artist:(NSString *)artist album:(NSString *)album;
-(void)addSongAtSectionAndIndexToQueue:(NSUInteger)section row:(NSUInteger)row artist:(NSString *)artist album:(NSString *)album;
-(NSArray*)sectionArray:(NSUInteger)section;

-(void)initializeDataList:(NSString*)strSearch;

@end
