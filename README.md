# VectorizedThreads
By leveraging multi-threading and vectorized operations, this framework efficiently handles large-scale linear algebra problems, making it an optimal choice for applications requiring intensive numerical simulations.

## Overview
`MultiStockSimulation` is a C++ project that simulates stock price paths for multiple stocks using mathematical models, including the Black-Scholes model and multi-stock covariance models. The project leverages matrix operations and multi-threading for high-performance computation.

This repository includes:
- Simulation of stock price paths using drift and covariance matrices.
- Implementation of market simulations under both P-measure and Q-measure.
- Support for creating sub-models and extracting individual Black-Scholes models from the multi-stock model.
- Multi-threaded computations for improved performance.

---

## Features
- Multi-stock price path generation with covariance matrix support.
- Cholesky decomposition for efficient covariance computation.
- Multi-threading for large-scale simulations.
- Extensive testing to verify covariance matrix accuracy.

---

## Installation
To build and run the project, you need:
- A C++ compiler (e.g., `g++`).
- `Make` build system.
