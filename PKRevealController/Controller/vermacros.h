//
//  vermacros.h
//  PKRevealController
//
//  Created by Warren Postma on 2013-10-07.
//  Copyright (c) 2013 zuui.org. All rights reserved.
//

#ifndef PKRevealController_vermacros_h
#define PKRevealController_vermacros_h



#define SYSVER_EQ(v) ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSVER_GT(v) ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSVER_GE(v) ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSVER_LT(v) ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SYSVER_LE(v) ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)



#endif
