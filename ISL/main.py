import numpy as np
import matplotlib.pyplot as plt
from scipy.fft import fft, fftfreq

def generate_sine_wave(freq, sample_rate, duration):
    t = np.linspace(0, duration, int(sample_rate * duration), endpoint=False)
    y = np.sin(2 * np.pi * freq * t)
    return t, y

def generate_square_wave(freq, sample_rate, duration):
    t = np.linspace(0, duration, int(sample_rate * duration), endpoint=False)
    y = np.sign(np.sin(2 * np.pi * freq * t))
    return t, y

def plot_signal(t, signal, title):
    plt.figure(figsize=(12, 6))
    plt.plot(t, signal)
    plt.title(title)
    plt.xlabel('Czas [s]')
    plt.ylabel('Amplituda')
    plt.grid()
    plt.xlim(0, max(t))
    plt.show()

def plot_spectrum(signal, sample_rate):
    N = len(signal)
    yf = fft(signal)
    xf = fftfreq(N, 1 / sample_rate)

    plt.figure(figsize=(12, 6))
    plt.plot(xf[:N // 2], 2.0 / N * np.abs(yf[:N // 2]))
    plt.title('Widmo sygnału')
    plt.xlabel('Częstotliwość [Hz]')
    plt.ylabel('Amplituda')
    plt.grid()
    plt.show()

def main():
    sample_rate = 1000  # Hz
    duration = 1.0  # seconds

    # Generowanie sygnałów
    freq_sine = 5  # Hz
    t_sine, sine_wave = generate_sine_wave(freq_sine, sample_rate, duration)
    plot_signal(t_sine, sine_wave, 'Sygnał sinusoidalny')

    freq_square = 5  # Hz
    t_square, square_wave = generate_square_wave(freq_square, sample_rate, duration)
    plot_signal(t_square, square_wave, 'Sygnał prostokątny')

    # Analiza widma
    plot_spectrum(sine_wave, sample_rate)
    plot_spectrum(square_wave, sample_rate)

if __name__ == '__main__':
    main()
