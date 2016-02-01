//
//  GIGPresenter.h
//  GIGBeaconRegion
//
//  Created by Alejandro Rupérez on 27/11/14.
//  Copyright (c) 2016 alexruperez. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "GIGBeaconModel.h"


@protocol GIGPresenterViewController <NSObject>

- (void)showBeaconModels:(NSArray *)beaconModels;

@end


@interface GIGPresenter : NSObject

- (instancetype)initWithViewController:(UIViewController<GIGPresenterViewController> *)viewController;

- (void)viewIsReady;

- (void)userDidSelectBeacon:(GIGBeaconModel *)beaconModel;

@end
