//
//  BLEServicesManagerViewController.h
//  BLE_Scanner
//
//  Created by Chip Keyes on 2/5/13.
//  Copyright (c) 2013 Chip Keyes. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import "BLEPeripheralRecord.h"


@protocol BLEServicesManagerDelegate <NSObject>

-(void)getCharacteristicsForService: (CBService *)service sender:(id)sender;

@end


@interface BLEServicesManagerViewController : UIViewController  <CBPeripheralDelegate, BLEServicesManagerDelegate>

// Model for the view controller
@property (nonatomic, strong)BLEPeripheralRecord *deviceRecord ;


@end
