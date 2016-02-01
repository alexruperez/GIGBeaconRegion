//
//  GIGStorage.h
//  GIGBeaconRegion
//
//  Created by Alejandro Rupérez on 27/11/14.
//  Copyright (c) 2016 alexruperez. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GIGStorage : NSObject

+ (instancetype)sharedStorage;

- (id)objectForKey:(NSString *)key;

- (BOOL)setObject:(id)value forKey:(NSString *)key;

- (BOOL)removeObjectForKey:(NSString *)key;

@end
