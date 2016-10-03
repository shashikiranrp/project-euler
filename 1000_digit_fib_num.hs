module Main where 

fib :: Integer -> Integer -> [Integer]
fib a b = a : fib b (a + b)

main :: IO ()
main = putStrLn $ show $ succ $ length $ takeWhile (\x -> length x < 1000) $ map show  $ fib 1 1 
