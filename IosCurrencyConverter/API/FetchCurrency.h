//
//  FetchCurrency.h
//  FirstApp
//
//  Created by Bikash Shrestha on 9/18/18.
//  Copyright © 2018 Bikash Shrestha. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CurrencyService : NSObject

@property (nonatomic, strong)  NSMutableArray *currencies;

- (void) fetchCurrenciesWithCompletionHandler:(NSString *) empty
                                      success:(void (^)(NSArray *array))success
                                      failure: (void (^)(NSError *error))failure;

@end
