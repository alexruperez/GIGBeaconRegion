//
//  GIGBeaconRegion.h
//  GIGBeaconRegion
//
//  Created by Alejandro Rupérez on 27/11/14.
//  Copyright (c) 2016 alexruperez. All rights reserved.
//  Source https://github.com/sandeepmistry/AnyiBeacon-iOS
//

#import <CoreLocation/CoreLocation.h>

@interface GIGBeaconRegion : CLBeaconRegion

- (instancetype)initWithIdentifier:(NSString *)identifier;

@end
