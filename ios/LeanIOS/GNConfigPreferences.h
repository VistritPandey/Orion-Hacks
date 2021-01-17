//
//  GNConfigPreferences.h
//  GonativeIO
//
//  Created by Weiyin He on 3/16/18.
//  Copyright © 2018 GoNative.io LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GNConfigPreferences : NSObject
+(instancetype)sharedPreferences;

-(BOOL)handleUrl:(NSURL*)url;
-(void)setInitialUrl:(NSString*)url;
-(NSString*)getInitialUrl;
@end
